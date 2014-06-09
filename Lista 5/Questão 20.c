#include <stdio.h>

void ler_vec(int* V){
	int i = 0;
	while (i < 5){
		printf("\nDigite o numero da posiçcao %d do vetor\n", i+1);
		scanf("%d", &V[i]);
		i++;
	}
}

void imprime(int* V){
	int i;
	for (i = 0; i < 5; i++) {
		if(V[i] % 2 == 0){
			printf("\n%08x\n\n", &V[i]);
		}
	}
}

int main(){
	int n, V[5];
	ler_vec(V);
	imprime(V);
	
}
