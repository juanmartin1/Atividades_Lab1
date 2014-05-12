#include <stdio.h>

int main(){
	char sexo;
	float h;
	scanf("%c", &sexo);
	scanf("%f", &h);
	
	switch (sexo){
		case 'h':
			printf("Seu peso ideal e: %f", 72.7*h - 58);
			break;
		case 'm':
			printf("Seu peso ideal e: %f", 62.1*h - 44.7);
			break;
	}
}
