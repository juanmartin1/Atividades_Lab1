#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, x, y, R, c=0;
	for (i=0 ; i<5 ; i++){
		x = rand () % 100;
		y = rand () % 100;
		printf("Qual o resultado da soma %d + %d?\n",x,y);
		scanf("%d", &R);
		if (R == x + y){
			printf("Sua resposta esta correta\n");
			c++;
		}
		else{
			printf("Sua resposta esta incorreta, a resposta correta e: %d\n", x + y);
		}
		printf("Voce acertou %d perguntas.", c);
	}
}
