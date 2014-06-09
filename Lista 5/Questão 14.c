#include <stdio.h>

void incrementa(int* V, int n){
	int i;
	int* point;
	point = V;
	for (i = 0; i < n; i++){
		point[i] += 1;
	}
}

void ler_vec(int* V, int n){
	int i = 0;
	while (i < n){
		printf("\nDigite o numero da posiçcao %d do vetor\n", i+1);
		scanf("%d", &V[i]);
		i++;
	}
}

void imprime(int* V, int n){
	int i;
	for (i = 0; i < n; i++) {
		printf("%d\n", V[i]);
	}
}

int main(){
	int n;
	
	printf("Digite o numero de posicoes do vetor");
	scanf("%d", &n);
	int V[n];
	ler_vec(V, n);
	incrementa(V, n);	
	imprime(V, n);
	
}
