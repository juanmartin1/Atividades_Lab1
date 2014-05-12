#include <stdio.h>

int main(){
	char c[100];
	int i;
	scanf("%c", &c);
	for (i=0 ; i<100 ; i++){
		if (c[i] == "0"){
			c[i] = "1";
		}
	}
}
