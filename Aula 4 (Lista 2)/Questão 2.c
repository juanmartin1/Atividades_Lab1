#include <stdio.h>
#include <string.h>
   
   // Este programa retorna 1 se o string lido for palindromo e 0 se não.
  
size_t len(char* text){
	return strlen(text);
}
  
void testaM(char* text, int* i){
  	if (text[*i]==' '){ // caso alguma posição seja um espaço o programa ignora essa posição.
		(*i)++;
	}
}
  
void testam(char* text, int* n){
  	if (text[*n]==' '){ // caso alguma posição seja um espaço o programa ignora essa posição.
		(*n)--;
	}
}

int testai(char* text, int* n, int* i){
  	if (text[*i]== text[*n]){ // caso alguma posição seja um espaço o programa ignora essa posição.
		return 0;
	}
}

  int testPal(char* text){
	int n, i=0;
	n = len(text)-1; // fornece o numero de posições utilizadas do vetor.
	while(i<=len(text)-1){
		testaM(text, &i);
		testam(text, &n);
		testai(text, &n, &i);
	i++;
	n--;
	}
	return 1;
}

void ler(char* str){
		gets(str);
}

    
int main(){
	char text[1000]; // inicializa o string a ser lido.
	ler(text);	// lê do teclado o string a ser testado
	testPal(text); // testa se text é palindromo.
}


