#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void testac(char* str1, char* str2, int* i){
		if (str1[*i] != str2[*i]){ 	//Caso as string possuam caracteres diferentes em posições iguais a função retornará 0. 
			imprime(0);
			exit(0);
		}	
}

void testai(int i, int n){
		if (i != n){ 	//Caso as string possuam caracteres diferentes em posições iguais a função retornará 0. 
			imprime(0);
			exit(0);
		}	
}
	
void compara(char* str1, char* str2){ 	// esta função verifica se os string são iguais, se sim retorna 1 senão retorna 0.
	int i=0;
	while(i<strlen(str1)-1){	// 	cria um bloco de repetição no qual i vai de 0 ate o numero de posições do vetor
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
	testai(strlen(str1), strlen(str2));	// verifica se os dois vetores possuem o mesmo numero de posições não vazias.
	compara(str1, str2);	// chama a função comapara localizada na linha 5.
	return 1;
}
