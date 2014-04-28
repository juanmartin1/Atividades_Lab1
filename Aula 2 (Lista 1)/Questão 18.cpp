#include <stdio.h>

int main(){
	float P, Ex, M;
	scanf("%f", &P);
	if (P > 50.0){
		Ex = P - 50.0;
		M = Ex * 4.0;
	}
	printf("O peso foi %f\nO exesso foi %f\nA multa foi de R$ %f", P, Ex, M);
}
