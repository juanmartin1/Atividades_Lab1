#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void se1(int* maior, int idade){
	if (idade > *maior) *maior = idade;
}

void se2(int* menor, int idade){
	if (idade < *menor) *menor = idade;
}

void enquanto(int* maior, int* menor){
	char nome[100][50];
	int idade[100], i = 0;
	while (1){
		scanf("%d", &idade[i]);
		if (idade[i] < 0) break;
		scanf("%s", nome[i]);
		se1(maior, idade[i]);
		se2(menor, idade[i]);
		i++;
	}

}
	
int main(){
	int maior = -1, menor = 999;
	enquanto(&maior, &menor);
	printf("a menor idade foi: %d.\nA maior idade foi: %d.", menor, maior);
}

