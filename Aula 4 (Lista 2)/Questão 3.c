#include <stdio.h>

// O programa retorna o numero de posi��es n�o vazias de um vetor.

void para(char* str, int* i){
	for((*i)=0; str[*i]; (*i)++) { // neste bloco ocorre a contagem das posi��es utilizadas.
	}
}

void cont(char* str, int* i){  // esta fun��o da a 'n' o numero de posi��es utilizadas do vetor 'str'.
	para(str, i);
}

void ler(char* str){
	gets(str);
}

int main(){
	int i=0;
	char str[1000]; // inicializa a string a ser lida do teclado.
	ler(str); // esta fun�o da � variavel 'str' os valores lidos do teclado. 
	cont(str, &i);
	return i; // fun��o especificada na linha 10.
}
