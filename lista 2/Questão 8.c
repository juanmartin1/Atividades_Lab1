#include <stdio.h>
#include <string.h>


int min(char str){						//Esta fun��o retorna 1 se o caractere for minusculo e sen�o retorna 0.
		str = (char)(str);
		if ((str < 'z') || (str > 'a')){
	 		return 1;
     	}
}

int main(){
	char str[1000];
	gets(str);
	int i;
	for (i=0 ; i <= strlen(str)-1 ; i++){
		if ((char)(str[i] < 'a') || (char)(str[i]) > 'z'){ // Verifica se a letra j� � maiuscula.
		}
		else{
			if ((int)(str[i]) == 32) i++;		// verifica se a letra � um espa�o ' ' se for ela pula para o caractere seguinte.
			if (min(str[i])){					// utiliza a fun��o min, localizada na linha 5 para determinar se o caractere � minusculo
				str[i] -= 32;
			}
 		}
   	}
	printf("%s", str);
}

