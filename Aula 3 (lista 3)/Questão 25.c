#include <stdio.h>

int main(){
	int i, A[10], B[10], C[10];
	for (i=0 ; i<10 ; i++){
		scanf("%d", &A[i]);	
	}
	for (i=0 ; i<10 ; i++){
		scanf("%d", &B[i]);
	}
	for (i=0 ; i<10 ; i++){
		printf("%d", A[i]-B[i]);
	}
}
