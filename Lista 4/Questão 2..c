#include <stdio.h>
#include <string.h>
   
   // Este programa retorna 1 se o string lido for palindromo e 0 se n�o.
  
size_t len(char* text){
	return strlen(text);
}
  
void testaM(char* text, int* i){
  	if (text[*i]==' '){ // caso alguma posi��o seja um espa�o o programa ignora essa posi��o.
		(*i)++;
	}
}
  
void testam(char* text, int* n){
  	if (text[*n]==' '){ // caso alguma posi��o seja um espa�o o programa ignora essa posi��o.
		(*n)--;
	}
}

int testai(char* text, int* n, int* i){
  	if (text[*i]== text[*n]){ // caso alguma posi��o seja um espa�o o programa ignora essa posi��o.
		return 0;
	}
}

  int testPal(char* text){
	int n, i=0;
	n = len(text)-1; // fornece o numero de posi��es utilizadas do vetor.
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
	ler(text);	// l� do teclado o string a ser testado
	testPal(text); // testa se text � palindromo.
}


