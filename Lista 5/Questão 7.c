#include <stdio.h>


int fraca(float num, int* inteiro, float* frac){
	*inteiro = (int)num;
	*frac = num - (int)num;
}

int main(){
	int inteiro = 0;
	float num, frac = 0;
	scanf("%f", &num);
	fraca(num, &inteiro, &frac);
	printf("A parte inteira do numer e: %d\nA parte fracionaria do numero e: %.4f", inteiro, frac);
}
