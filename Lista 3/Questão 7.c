#include <stdio.h>

int main(){
	int num, c = 1, i, x;
	scanf("%d", &num);
	while (c != 0) {
		num++;
		c = 0;
		for (i=0;i == num;i++){
			if (num%i == 0){
				c++;
			}
		}
	}
	printf("%d", num);
}
