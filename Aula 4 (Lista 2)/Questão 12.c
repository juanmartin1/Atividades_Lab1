#include <stdio.h>
#include <math.h>

int main(){
	int op = 0;
	float x,y,z;
	scanf("%d", &op);
	switch (op){
	case 1:
		scanf("%f", &x);
		scanf("%f", &y);
		scanf("%f", &z);
		printf("%f", cbrt(x*y*z));
		break;
	case 2:
		scanf("%f", &x);
		scanf("%f", &y);
		scanf("%f", &z);
		printf("%f", (x + 2.0*y + 3.0*z)/6.0);
		break;
	case 3:
		scanf("%f", &x);
		scanf("%f", &y);
		scanf("%f", &z);
		printf("%f", 1.0/((1.0/x) + (1.0/y)*(1.0/z)));
		break;
	case 4:
		scanf("%f", &x);
		scanf("%f", &y);
		scanf("%f", &z);
		printf("%f", (x + y + z)/3);
		break;
	default:
		printf("error %d nao e reconhecido", op);
}
}
