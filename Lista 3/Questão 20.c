#include <stdio.h>

int main(){
	int i, V[100], Vi[100], n1, n2,e;
	scanf("%d", &n1);
	for (i=0 ; i<n1 ; i++){
		scanf("%d", &V[i]);
	} 
	for (i=0 ; i<=n1 ; i++){
		if (V[i]%2 == 0){
			n2++;
			Vi[i] = V[i];
		}
	}
	for (i=0 ; i<=n1/10 ; i++){
		for (i=0 ; i<=10 ; i++){
			printf("%d", V[i]); 
		}
		printf("\n");
	}
	
	for (i=0 ; i<=n2/10 ; i++){
		for (i=0 ; i<=10 ; i++){
			printf("%d", Vi[i]);
		}
		printf("\n");
	}
}
