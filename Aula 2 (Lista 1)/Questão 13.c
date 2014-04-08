#include <stdio.h>

int main(){
	float temp;
	printf("digite a temperatura em Fahrenheit\n");
	scanf("%f", &temp);
	printf("a temperatura %f em Celcius e: %f",temp, (5 * (temp-32) / 9));
	return (0);
}
