#include <stdio.h>

int main(){
	int i, V[10],M,test,e;
	for (i=0 ; i<10 ; i++){
		scanf("%d", &V[i]);
	}
	M = V[0];
	for (i=1 ; i<10 ; i++){
		if (V[i] >= M){
			M = V[i];
			e = i;
		}
	}
	for (i=0 ; i<10 ; i++){
		printf("Os valores do vetor sao:%d\n", V[i]);
	}
	printf("O maior numero e:%d\nNa posicao %d", M, e);
	return 0;
}
