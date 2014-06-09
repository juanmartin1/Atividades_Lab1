#include <stdio.h>

int main(){
	lernot(15)
}

int lernot(int n){
	int i, soma, nota;
	for(i=0 ; i<n ; i++){
		scanf("%d", &nota);
		soma = soma + nota;	
	}
	med(soma,nota);
}

int med(int S, int n){
	printf("%f", S*1.0/n*1.0);
}
