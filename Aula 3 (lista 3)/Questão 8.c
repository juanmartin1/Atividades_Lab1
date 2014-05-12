#include <stdio.h>

int main(){
	int  q=0, n=1;
	float  soma=0, num=0, med=0, M=0, m=0, medp=0, qp=0;
	while (n != 0){
		scanf("%f", &num);
		q++;
		soma = soma + num;
		med = med + (soma/q*1.0);
		if (M < num){
			M = num;
		}
		if (m > num){
			m = num;
		}
		if (num%2.0==0.0){
			qp++;
			medp = medp + num;
			medp = medp/qp;
		}
		printf(" A soma dos numeros digitados e: %f\n A quantidade de numeros digitados e: %f\n A media e: %f\n O maior numero foi: %f\n O menor foi: %f\n A media dos numeros pares foi: %f", soma, q, med, M, m, medp);		
		scanf("%d", &n);
	}
}
