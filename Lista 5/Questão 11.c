#include <stdio.h>

void ler_vec(int* V, int n, int* max){
	*max = -1000000;
	int i = 0;
	while (i < n){
		printf("\nDigite o numero da posiçcao %d do vetor\n", i+1);
		scanf("%d", &V[i]);
		if(*max <= V[i]) *max = V[i];
		i++;
	}
}

int imprime(int* vec, int k, int* x, int n){
	if(n - *x < 0) return 0;
	k+= *x;
	while((*x) < k){
		if((*x) == n) return 0;
		printf("|  %d  |", vec[*x]);
		(*x)++;
	}
}

int main(){
	int i, n, k;
	
	printf("Digite o numero de posicoes do vetor\n");
	scanf("%d", &n);
	
	printf("Digite o numero de posicoes do vetor a serem impressas por linha\n");
	scanf("%d", &k);
	
	int x=0, vec[n], max;
	
	ler_vec(vec, n, &max);	
 	
	for (i=0 ; i<=(n/k)+1 ; i++){
		imprime(vec, k, &x, n);
		printf("\n");
	}
	printf("\n\n o maior numero foi %d", max);
}
