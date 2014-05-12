#include <stdio.h>

int main(){
	int op = 0;
	float n1,n2;
	scanf("%d", &op);
	switch (op){
	case 1:
		scanf("%f", &n1);
		scanf("%f", &n2);
		printf("%f", n1 + n2);
		break;
	case 2:
		scanf("%f", &n1);
		scanf("%f", &n2);
		printf("%f", n1 - n2);
		break;
	case 3:
		scanf("%f", &n1);
		scanf("%f", &n2);
		printf("%f", n1*n2);
		break;
	case 4:
		scanf("%f", &n1);
		scanf("%f", &n2);
		printf("%f", n1/n2);
		break;
	default:
		printf("error %d nao e reconhecido", op);
}
}
