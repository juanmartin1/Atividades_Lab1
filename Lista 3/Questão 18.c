#include <stdio.h>

int main(){
	int i, n = 20, test = 1;
	while (test != 0){
		test = 0;
		for (i=0 ; i<=20 ; i++){
			if n%i != 0{
				test = 1;
				break;
			}
		}
		n++;
	}
	printf("%d", n);
}
