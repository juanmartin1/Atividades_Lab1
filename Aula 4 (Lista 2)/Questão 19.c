#include <stdio.h>
#include <string.h>

int procura(char* str, char* str1, int i, int j){	// Esta função procura o intervalo na string 'str' que vai da posição 'i' ate a posição 'j'.
	int e=0;
	while ( i != j+1) {
		str1[e] = str[i];
		i++;
		e++;
	}
	return 1;
}


int main(){
	char str[1000], str1[1000];
	int i, j;
	gets(str);			//Le do teclado o string.
	printf("Digite a posicao do inicio do intervalo");
	scanf("%d", &i);	// le do teclado a posição de inicio do intervalo.
	printf("Digite a posicao do final do intervalo");
	scanf("%d", &j);	// le do teclado a posição do final do intervalo.
	procura(str, str1, i, j);  // Utiliza a função da linha 4 para localizar o intervalo de 'i' a 'j' na string 'str'.
	printf("O intervalo de i a j do string lido e: %s", str1);
}
