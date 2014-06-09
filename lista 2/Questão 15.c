#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[5], b[5], resp[5], nota = 0, i;

	for (i = 0; i < 5; i++){
		int res;
		a[i] = rand()%100;
		b[i] = rand()%100;
		resp[i] = a[i]+b[i];

		printf("Qual a resposta da soma %d + %d?\n", a[i], b[i]);
		scanf("%d", &res);

		if (res == resp[i]){
			nota++;
		}
	}
	printf("Respostas:\n");

	for (i = 0; i < 5; i++){
		printf("Qual o valor da soma %d + %d?\n", a[i], b[i]);
		printf("Resposta: %d\n", resp[i]);
	}
	printf("Numero de respostas corretas: %d\n", nota);

	return 1;
}
