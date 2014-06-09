#include <stdio.h>

int main(){
	int a,b;
	
	if(&a >&b){printf("O maior endereco e o de a = %d\n", &a); printf("%08x\n", &a);}
	else {printf("O maior endereco e o de b = %d\n", &b); printf("%08x\n", &b);}
}
