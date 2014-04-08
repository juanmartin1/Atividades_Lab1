#include <stdio.h>

int main(){
	int horas;
	float sal;
	printf("digite quanto voce ganha por hora e separado por virgula digite o numero de horas por mes\n");
	scanf("%d,%f", &horas, &sal);
	printf("Voce ganha R$%f por mes", sal*horas);
	return (0);
}
