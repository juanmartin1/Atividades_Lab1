#include <stdio.h>


int V_a_pagar(float V){		//Retorna o valor de 'V' menos o desconto.
	return V - (V*0.1);
}

int desconto(float V){		// Retorna o valor do desconto de 10% sobre 'V'.
	return V*0.1;
}

int main(){
	char merc[100];
	float V, des, pagar;
	printf("Digite o nome da mercadoria.\n");
	gets(merc);										// Le do teclado o nome da mercadoria.
	printf("Digite o valor da mercadoria.\n");
	scanf("%d", &V);								// Le do teclado o valor da mercadori
	pagar = V_a_pagar(V);							// Utiliza a função da linha 4 para determinar o valor a pagar com o desconto de 10%.
	des = desconto(V);								// Utiliza a função da linha 8 para calcular o desconto de 10% sobre 'V'.
	printf("O nome da mercadoria e: %s.\nO valor total: e %f\nO valor do desconto e: %f\nO valor a ser pago e: %f", merc, V, des, pagar);
}
