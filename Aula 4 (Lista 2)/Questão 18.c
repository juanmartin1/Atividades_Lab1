#include <stdio.h>
#include <string.h>

int procura(char* str, char* c, int ind){	// Esta fun��o procura o caractere 'c', a partir da posi��o 'ind'.
	while (str[ind] != c[0]) {
		ind++;
		if (ind > strlen(str)-1){  	// Caso n�o seja encontrado o caractere 'c', a fun��o retorna -1.
			return -1;	
	   	}
	}
	return ind;
}


int main(){
	char str[1000], c[1];
	int ind;
	gets(str);			//Le do teclado o string.
	gets(c);			//Le do teclado o caractere a ser procurado.
	scanf("%d", &ind);	// le do teclado a posi��o a partir da qual deve ser feita a procura do caractere 'c'.
	if (procura(str, c, ind) == -1) printf("O caractere nao foi encontrado.");	 //utiliza a funcao da linha 4 para saber se foi encontrado ou n�o o caractere 'c', a partir da posi�� 'ind'
	else printf("a posicao do caractere '%s'' que voce procura apartir da posicao '%d' e: '%d'.", c, ind, procura(str, c, ind));
}
