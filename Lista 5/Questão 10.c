#include <stdio.h>

int dobra(x){
	return 2*x;
}

int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	a = dobra(a);
	b = dobra(b);
	printf("%d,  %d", a, b);
}
