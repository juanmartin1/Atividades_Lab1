#include <stdio.h>

int main(){
	int i, e, V[10];
	for(i=0 ; i<10 ; i++){
		scanf("%d", &V[i]);	
	}
	
	
	for(i=0 ; i<10 ; i++){
		if (V[i]%2 == 0){
			e++;
			printf("%d", V[i]);
		}
	}
}
