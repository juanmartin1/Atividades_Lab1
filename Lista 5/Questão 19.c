#include <stdio.h>

int main(){
	int i, V[5];
	int* p;
	p = V;
	for (i=0 ; i<5 ; i++){
		printf("Digite o numero da posicao %d\n", i);
		scanf("%d", p);
		*p *= 2;
		p++;
	}
	p -= 5;
	for (i=0 ; i<5 ; i++){
		printf("A posicao %d agora vale: %d\n", i, *p);
		p++;
	}	
}
