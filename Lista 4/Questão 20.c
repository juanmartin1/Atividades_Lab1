#include <stdio.h>
int ordem(char* str1, char* str2){	// Esta função determina qual string vem primeiro na ordem alfabetica.
	int i = 0;
	while(str1[i] == str2[i]) i++;		// pula as letras que são iguais no inicio e para quando encontra letras diferentes.
	if (str1[i] > str2[i])	return 1;	// verifica se o caractere 'i' de 'str1' depois do caractere 'i' de 'str2'.
	if (str1[i] < str2[i])	return 2;	// verifica se o caractere 'i' de 'str1' antes do caractere 'i' de 'str2'.
}
int main(){
	char str1[100], str2[100];
	scanf("%s", &str1);			//Le do teclado o string 1.
	scanf("%s", &str2);			//Le do teclado o string 2.
	if (ordem(str1, str2) == 1) printf("A palavra %s vem antes da palavra %s na ordem alfabetica", str2, str1);	
	if (ordem(str1, str2) == 2) printf("A palavra %s vem antes da palavra %s na ordem alfabetica", str1, str2);
}
