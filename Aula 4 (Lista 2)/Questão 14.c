#include <stdio.h>
#include <string.h>


int inverte(char* str1, char* str2){  // Esta fun��o inverte os caracteres de 'str1'
	int i = strlen(str1)-1, e = 0;
	while(e <= strlen(str1)){  // Coloca o valor da ultima posi��o de 'str1' na primeira posi��o de 'str2'.
		str2[e] = str1[i];
		e++;
		i--;
	}
	str2[e-1] = '\0';
	return 1;
}

int testePal(char* str1, char* str2){  // Esta fun��o testa se 'str1' e 'str2' s�o palindromos.
	int i=0;
	while (i <= strlen(str2)-1){ 	
		if (str1[i] != str2[i]) {  // Caso existam caracteres em posi��es opostas que n�o sejam iguais, as string n�o ser�o palindromos.
			return 0;				// Se n�o forem palindromos a fun��o vai retornar 0 caso contrario 1.
		}
		i++;
	}
	return 1;
}

int main(){
	char str1[15], str2[15];
	gets(str1);
	inverte(str1, str2);  // Chama a fun��o localizada na linha 5.
	printf("%s\n", str2);
	if (testePal(str1,str2)) printf("a string e um palindromo.");   // Chama a fun��o localizada na linha 16.
	else printf("A string nao e palindromo.");
	return 1; 	
}

