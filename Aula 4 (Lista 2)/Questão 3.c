#include <stdio.h>

// O programa retorna o numero de posições não vazias de um vetor.

void para(char* str, int* i){
	for((*i)=0; str[*i]; (*i)++) { // neste bloco ocorre a contagem das posições utilizadas.
	}
}

void cont(char* str, int* i){  // esta função da a 'n' o numero de posições utilizadas do vetor 'str'.
	para(str, i);
}

void ler(char* str){
	gets(str);
}

int main(){
	int i=0;
	char str[1000]; // inicializa a string a ser lida do teclado.
	ler(str); // esta funão da à variavel 'str' os valores lidos do teclado. 
	cont(str, &i);
	return i; // função especificada na linha 10.
}
