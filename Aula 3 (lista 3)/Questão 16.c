#include <stdio.h>

int main(){
	int i=0, soma=1, f = 0, a1=0, a2=1;
	while (f <= 4000000){
		f = a1 + a2;
		a1 = a2;
		a2 = f;
		if (f%2 == 0){
			soma = soma + f;
		}
	}	
}
