#include <stdio.h>

int main(){
	int i;
	float V[10];
	for (i=0 ; i<10 ; i++){
		printf("%08x\n", &V[i]);
		printf("%d\n\n", &V[i]);
	}
}
