#include <stdio.h>

void vec(int* V, int n, int x){
	int i = 0;
	int* pV;
	pV = V;
	for(i=0 ; i<n ; i++) {
		printf("V[%d] = %d\n", i , *pV++);
	}
}

void ler_vec(int* V, int n){
	int i = 0;
	int* ptV;
	ptV = V;
	while (i < n){
		printf("\nDigite o numero da posiçcao %d do vetor\n", i+1);
		scanf("%d", ptV);
		ptV++;
		i++;
	}
}

int main(){
	int n, x;
	printf("Digite o numero de posicoes do vetor");
	scanf("%d", &n);
	int V[n];
	ler_vec(V, n);
	vec(V, n , x);
}
