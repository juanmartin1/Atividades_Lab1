#include <stdio.h>

int main(){
	int n, i = 0, f = 0 ,temp = 1;
	scanf("%d", &n);
	printf("0  1");
	while(i < n){
		i = temp + f;
		f = temp;
		temp = i;
		printf("  %d", i);		
	}
}
