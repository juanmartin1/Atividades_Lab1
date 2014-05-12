#include <stdio.h>

int main(){
	float venda;
	scanf("%f", &venda);
	if ( venda > 100000){
		printf("%f", 700 + venda*0.16);
	}
	if ((venda < 100000) && (venda>80000)){
		printf("%f", 650 + venda*0.14);
	}
	if ((venda < 80000) && (venda>60000)){
		printf("%f", 600 + venda*0.14);
	}
	if ((venda < 60000) && (venda>4000)){
		printf("%f", 550 + venda*0.14);
	}
	if ((venda < 40000) && (venda>20000)){
		printf("%f", 500 + venda*0.14);
	}
	if (venda < 20000){
		printf("%f", 450 + venda*0.14);
	}
}
