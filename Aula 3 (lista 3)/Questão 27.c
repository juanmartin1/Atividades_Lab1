#include <stdio.h>

int main(){
	int cod, i, e;
	float  A[5];
	for (i=0 ; i<5 ; i++){
		scanf("%d", &A[i]);	
	}
	scanf("%d", &cod;	
	switch (cod){
	case 0:
		break;
	case 1:
			for (i=0 ; i<5 ; i++){
			printf("%d", A[i]);	
		}
		break;
	case 2:
		for (i=4 ; i<0 ; i--){
			printf("%d", A[i]);	
		}
		break;
	default:
		printf("O codigo e invalido");
	}
}
