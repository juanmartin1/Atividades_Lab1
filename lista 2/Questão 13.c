#include <stdio.h>

int main(){
	float venda, comissao = 0;
	scanf("%f", &venda);

	if (venda >= 100000.0) {
		comissao += 700 + venda*0.16;
	}	
	else if ((venda < 100000.0) && (venda >= 80000.0)) {
		comissao += 650 + venda*0.14;
	}
	else if ((venda < 80000.0) && (venda >= 60000.0)) {
		comissao += 600 + venda*0.14;
	}
	else if ((venda < 60000.0) && (venda >= 40000.0)) {
		comissao += 550 + venda*0.14;
	}
	else if ((venda < 40000.0) && (venda >= 20000.0)) {
		comissao += 500 + venda*0.14;
	}
	else if(venda < 20000){
		comissao += 400 + venda*0.14;
	}
	printf("Comissao: %.02f", comissao);
	return 1;	
}
