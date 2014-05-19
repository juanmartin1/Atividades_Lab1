#include <stdio.h>
#include <string.h>


void finaliza(char* encript, int* i){
	encript[*i] = '\0';
}

void enquanto(char* str1, char* str2, int* i ,int* e, int N){
	while (*i<=N){			// O bloco termina quando 'N' elementos de 'str2' forem concatenados à 'str1'.
		str1[*i] = str2[*e];
		(*i)++;
		(*e)++;		
	}
}

char concatena(char* str1, char* str2, int N){ // A função concatena os primeiros 'N' caracteres de 'str2' na string 'str1'.
	int e=0,i= strlen(str1);
	N += i-1;
	enquanto(str1, str2, &i, &e, N);
	finaliza(str1, &i);
	return 0;

}

void ler(char* str){
		gets(str);
}

void leri(int* i){
	scanf("%d", i);
}

void imprime(char* str1){
	printf("%s", str1);
}

int main(){
	char str2[10000], str1[1000]; 	// inicializa os dois vetores a serem lidos.
	int N;			// numero de elemntos de 'str2' a serem concatenados em 'str1'.
	ler(str1); 	// recebe do teclado os valores a serem alocados na variavel 'str1'
	ler(str2); 	// recebe do teclado os valores a serem alocados na variavel 'str2'
	leri(&N);
	concatena(str1, str2, N);
	imprime(str1);
	return 1;
}

