#include <stdio.h>
#include <string.h>

void ler(char* str){
	gets(str);
}

int len(char* str){
	return strlen(str);
}

void enquanto(char* str, int* i, int* e, int n, char* c){
	while((*i) < (n)){
		if ((str[*i] == 'a') || (str[*i] == 'e') || (str[*i] == 'i') || (str[*i] == 'o') || (str[*i] == 'u')){ // utiliza a função localizada na linha 4 para saber se o caractere é um vogal ou não
			 str[*i] = c[0];
             printf("%c", str[*i]);
			 (*i)++;
			 (*e)++;
		}
		else {
			printf("%c", str[*i]);	
			(*i)++; 
		}
	}
}

int main(){
	char str[1000], c[1]; 	// inicializa um vetor a ser lido.
	int n ,i=0, e=0;
	ler(str); 
	printf("%s", str);
	n = len(str);
	printf("\nDigite o caractere que substituira as vogais da palvara.\n");
	ler(c);
	printf("\n");
	enquanto(str, &i, &e, n, c);
	printf("\n\n%d, %d", i, e);
}
