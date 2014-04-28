#include <stdio.h>

int main(){
	char sexo;
	float h;
	scanf("%c %f", &sexo, &h);
	if (sexo == 'm'){
		printf("%f\n",(62.1*h) - 44.7);
	}
	if (sexo == 'h'){
		printf("%f\n",(72.7*h) - 58);
	}
	return 0;
}
