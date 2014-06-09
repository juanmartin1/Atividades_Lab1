#include <stdio.h>

void soma(int* A, int* B){
	int temp;
	temp = *A + *B;
	*A = temp;
}

int main(){
	int A, B;
	printf("Digite A\n");
	scanf("%d", &A);
	printf("Digite B\n");
	scanf("%d", &B);
	soma(&A, &B);
	printf("\n\nagora o valor de A = %d e o de B = %d", A, B);
}
