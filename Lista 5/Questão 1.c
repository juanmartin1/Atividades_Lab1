#include <stdio.h>

void inverte(int* A, int* B){
	int temp;
	temp = *A;
	*A = *B;
	*B = temp;
}

int main(){
	int A, B;
	printf("Digite A\n");
	scanf("%d", &A);
	printf("Digite B\n");
	scanf("%d", &B);
	inverte(&A, &B);
	printf("\n\nagora o valor de A = %d e o de B = %d", A, B);
}
