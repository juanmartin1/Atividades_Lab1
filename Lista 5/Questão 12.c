#include <stdio.h>

void detecta(int* max, int* min, int* vec, int n){
	int i = 0;
	
	while(i<n){
		if (*max < vec[i]) *max = vec[i];
		if (*min > vec[i]) *min = vec[i];
		i++;
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

int main(){
	int n, max = -1000000, min = 1000000;
	
	printf("Digite o numero de posicoes do vetor");
	scanf("%d", &n);
	
	int vec[n];
	ler_vec(vec, n);
	detecta(&max, &min, vec, n);
	
	printf("O maior numero foi %d\nO menor numero foi %d", max, min);
	
}
