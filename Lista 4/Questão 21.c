#include <stdio.h>
#include <string.h>


int mai(char str){						//Esta função retorna 1 se o caractere for MAIUSCULO e senão retorna 0.
		str = (char)(str);
		if ((str < 'Z') && (str > 'A')){
	 		return 1;
     	}
}

int main(){
	char str[1000];
	gets(str);
	int i;
	for (i=0 ; i <= strlen(str)-1 ; i++){
		if (((int)(str[i]) <= 122)&&((int)(str[i]) >= 97)){ // Verifica se a letra já é minuscula.
		}
		else{
			if ((int)(str[i]) == 32) i++;		// verifica se a letra é um espaço ' ' se for ela pula para o caractere seguinte.
			if (mai(str[i])){					// utiliz- a função mai, localizada na linha 5 para determinar se o caractere é MAIUSCULO.
				str[i] = (char)(str[i]+32);
			}
 		}
   	}
	printf("%s", str);
}

