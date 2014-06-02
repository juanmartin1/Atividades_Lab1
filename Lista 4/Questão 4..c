#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void testac(char* str1, char* str2, int* i){
		if (str1[*i] != str2[*i]){ 	//Caso as string possuam caracteres diferentes em posi��es iguais a fun��o retornar� 0. 
			imprime(0);
			exit(0);
		}	
}

void testai(int i, int n){
		if (i != n){ 	//Caso as string possuam caracteres diferentes em posi��es iguais a fun��o retornar� 0. 
			imprime(0);
			exit(0);
		}	
}
	
void compara(char* str1, char* str2){ 	// esta fun��o verifica se os string s�o iguais, se sim retorna 1 sen�o retorna 0.
	int i=0;
	while(i<strlen(str1)-1){	// 	cria um bloco de repeti��o no qual i vai de 0 ate o numero de posi��es do vetor
		testac(str1, str2, &i);
		i++;
	}
}

void imprime(int i){
	printf("%d", i);
}

void ler(char* str){
		gets(str);
}
	// O programa retorn 1 se as string forem iguais e 0 se forem diferentes.
int main(){
	char str2[1000], str1[1000]; 	// inicializa os dois vetores a serem lidos.
	ler(str1); 	// recebe do teclado os valores a serem alocados na variavel 'str1'
	ler(str2); 	// recebe do teclado os valores a serem alocados na variavel 'str2'
	testai(strlen(str1), strlen(str2));	// verifica se os dois vetores possuem o mesmo numero de posi��es n�o vazias.
	compara(str1, str2);	// chama a fun��o comapara localizada na linha 5.
	return 1;
}
