#include <stdio.h>
#include <string.h>

int exclui(char* str1, char* str2, char* c){  //Esta função exclui os caracteres que sejam iguais ao selecionado 'c'.
	int i = 0, j=0;
	while (i <= strlen(str1)-1){
		while (str1[i] == c[0]) i++;  // Enquanto a posição 'i' da string seja igual ao caracter selecionado 'i' aumenta 1.
		str2[j] = str1[i];
		i++;
		j++;
	}
	str2[j] = '\0';   // Adiciona o finalizador da string.
	return 1;
}


int main(){
	char str1[30], str2[30], c[1];
	gets(str1);
	gets(c);
	exclui(str1, str2, c);  // Chama a função localizada na linha 4.
	printf("%s\n%s",str1, str2);
	return 1; 	
}
