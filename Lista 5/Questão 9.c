#include <stdio.h>
#include <stdlib.h>

void ler_vec(int* V, int n){
	int i = 0;
	while (i < n){
		printf("\nDigite o numero da posiçcao %d do vetor\n", i+1);
		scanf("%d", &V[i]);
		i++;
	}
}

void verifica(int n1, int n2){
	if (n1 != n2) exit(1);
}

void soma_vec(int* V1, int* V2, int n1, int* soma){
	int i;
	for(i=0 ; i<n1 ; i++){
		soma[i] = V1[i] + V2[i];
	}
}

int main(){
	int i, n1 , n2;

	printf("\nDigite o numero de posicoes do vetor 1\n");
	scanf("%d", &n1);
	
	printf("\nDigite o numero de posicoes do vetor 2\n");
	scanf("%d", &n2);
	
	int V1[n1], V2[n2]; 
	ler_vec(V1, n1);
	ler_vec(V2, n2);
	verifica(n1,n2);
	int soma[n1];
	soma_vec(V1, V2, n1, soma);
	printf("\n");	
	for (i=0 ; i<n1 ; i++){
		printf("|  %d  |", soma[i]);
	}
	return 0;
}
