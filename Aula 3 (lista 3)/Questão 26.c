#include <stdio.h>

int main(){
	int i, A[10], e;
	for (i=0 ; i<10 ; i++){
		scanf("%d", &A[i]);	
	}
	for (i=0 ; i<10 ; i++){
		for (e=0 ; e<10 ; e++){
			if (A[i] == A[e]){
				printf("%d", A[e]);
			}
		}
	}
}
