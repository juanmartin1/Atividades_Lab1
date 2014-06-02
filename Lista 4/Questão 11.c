#include <stdio.h>
#include <string.h>

int troca(char* str){
	int i = 0;
	while (i <= strlen(str)-1){	// Este bloco 'while' troca as letras 'a' ou 'A' por um '*'.
		if ((str[i] == 'a') || (str[i] == 'A')){ // Verifica se o caracter é 'a' ou 'A', se sim ele o troca por '*'.
			str[i] = '*';
		}
		i++;
	}
}

int inverte(char* str, char* str1){  //Esta função inverte a string.
	char temp;
	int i = strlen(str)-1, e = 0;
	while(e <= strlen(str)){ //Coloca o ultimo elemento de 'str' na primeira posição de 'str1' e assim por diante.
		str1[e] = str[i];
		e++;
		i--;
	}
	str1[e-1] = '\0';
	troca(str1);  // Chama a função localizada na linha 4.
	return 1;
}

int main(){
	char str1[1000], str2[1000], str11[1000], str22[1000];
	gets(str1);
	gets(str2);
	inverte(str1, str11); //Chama a função localizada na linha 14.
	inverte(str2, str22); //Chama a função localizada na linha 14.
	printf("%s\n%s",str11, str22);
	return 1; 	
}
