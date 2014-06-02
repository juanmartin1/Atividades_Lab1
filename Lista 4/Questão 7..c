#include <stdio.h>
#include <string.h>

int detec_vogal(char str, int* i){	// esta função retorna 1 se o caractere for uma vogal e 0 se for consoante.
	if ( (str == 'a') || (str == 'e') || (str == 'i') || (str == 'o') || (str == 'u') ){
		(*i)++;
		return 1;
	}
	return 0;
}

void ler(char* str){
		gets(str);
}

size_t len(char* text){
	return strlen(text);
}

void laco(int* i , int n, char str, char* str2){
		int e =0;
		while((*i)<=n){
		if (detec_vogal(str, i)); // utiliza a função localizada na linha 4 para saber se o caractere é um vogal ou não
		if (detec_vogal(str, i));
		(*str2) = str;
		printf("%c\n", str2);
		(*i)++;
		e++;
	}
}

int main(){
	char str[1000], str2[1000]; 	// inicializa um vetor a ser lido.
	int n ,i=0, e=0;
	ler(str); 
	n = len(str)-1;
	laco(&i, n, str[i], &(str2[e]));
	printf("%s", str2);
}
