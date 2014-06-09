#include <stdio.h>

int main(){
	int i,j;
	float V[3][3];
	printf("\n ________________________________________\n");
	for (i=0 ; i<3 ; i++){
		for (j=0 ; j<3 ; j++){		
			printf("|  %08x  |", &V[i][j]);
		}
		printf("\n ________________________________________\n");
	}
}
