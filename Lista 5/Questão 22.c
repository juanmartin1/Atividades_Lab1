#include <stdio.h>

void vec(int* V, int n, int x){
	int i = 0;
	int* pV;
	pV = V;
	while (i < n){
		*pV = x;
		i++;
		pV++;
	}
	pV--;
	for(i=0 ; i<n ; i++) {
		printf("V[%d] = %d\n", n - i , *pV--);
	}
}

int main(){
	int n, x;
	printf("Digite o numero de posicoes do vetor");
	scanf("%d", &n);
		printf("Digite o numero a ser alocado no vetor");
	scanf("%d", &x);
	int V[n];
	vec(V, n , x);
}
