#include <stdio.h>

int main(){
	int a,b;

	printf("Digite o valor da variavel 'a'.");
	scanf("%d" ,&a);
	printf("Digite o valor da variavel 'b'.");
	scanf("%d" ,&b);
	
	if(&a > &b) printf("O maior endereco e o de a = %d, de endereco %d", a, &a);
	else printf("O maior endereco e o de b = %d, de endereco %d", b, &b);
}
