#include <stdio.h>
#include <string.h>

int detec_vogal(char str){	// esta função retorna 1 se o caractere for uma vogal e 0 se for consoante.
	if ( (str == 'a') || (str == 'e') || (str == 'i') || (str == 'o') || (str == 'u') ){
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

int main(){
	char str[1000], str2[1000]; 	// inicializa um vetor a ser lido.
	int n ,i=0, e=0;
	ler(str); 
	n = len(str)-1;
	while(i<=n){
		if (detec_vogal(str[i])){ // utiliza a função localizada na linha 4 para saber se o caractere é um vogal ou não
			 i++;
		}
		if (detec_vogal(str[i])){
			 i++;
		}
		str2[e] = str[i];
		i++;
		e++;
	}
	printf("%s", str2);
}
