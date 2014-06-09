#include <stdio.h>

void inverte(int* M, int* m){
	int temp;
	if (*m > *M){
		temp = *M;
		*M = *m;
		*m = temp;
	}
}

int main(){
	int M, m;
	printf("Digite A\n");
	scanf("%d", &M);
	printf("Digite B\n");
	scanf("%d", &m);
	inverte(&M, &m);
	printf("\n\nagora o valor de A = %d e o de B = %d", M, m);
}
