#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float* x1, float* x2){
	if ((pow(b,2) - 4.0*a*c) > 0){
		*x1 = (-b + sqrt(pow(b,2.0) - (4.0*a*c)))/2.0*a;
		*x2 = (-b - sqrt(pow(b,2.0) - (4.0*a*c)))/2.0*a;
	}
	if((pow(b,2) - 4.0*a*c) == 0){
		*x1 = -b/2.0*a;
		*x2 = -b/2.0*a;
	}
}

int main(){
	float a, b ,c, x1, x2;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	printf("sua equacao do 2 grau e: %.1fx2 + %.1fx + %.1f", a ,b ,c);
	raizes(a, b, c, &x1, &x2);
	printf("\n\nAs raizes da equacao sao: X' = %.2f, X'' = %.2f", x1, x2);
}
