#include <stdio.h>

int main(){
	int i = 2,e, n, temp = 0;
	scanf("%d", &n);
	printf("2");
	for (i=3 ; i < n ; i++){
		for (e=2 ; e<i ; e++){
			if (i%e==0){
				temp = 1;				
			}
		}
		if (temp = 0) {
			printf("\n%d", i);
		}
	}
	scanf("%d", &i);
}
