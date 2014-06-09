#include <stdio.h>

int main(){
	int V[11], i, e, temp;
	for (i=0 ; i<11 ; i++){
		scanf("%d", V[i]);
	}
	
	for (i=0 ; i<11 ; i++){
		for (e=0 ; e<11 ; e++){
			if (V[i] > V[e]){
				temp = V[e];
				V[e] = V[i];
				V[i] = temp;
			}
		}
	}
	
	for (i=0 ; i<11 ; i++){
		printf("%d", V[i]);
	}
}
