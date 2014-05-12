#include <stdio.h>

int main(){
	float sal, emp;
	scanf("%f", &sal);
	scanf("%f", &emp);
	if (emp < sal*0.2){
		printf("Emprestimo nao concedido");
	}
	else{
		printf("Emprestimo concedido");
	}
}
