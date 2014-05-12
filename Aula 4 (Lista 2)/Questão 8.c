#include <stdio.h>

int main(){
	int rev, i, temp = 0, x = 100;
	scanf("%d", &rev);
	for (i=0 ; i<3 ; i++){
		temp += (rev%10) * x;
		rev = rev / 10;
		x = x / 10;
	}
	printf("%d", temp);
}
