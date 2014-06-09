#include <stdio.h>

int main(){
	int i, n=0;
	char c[100];
	scanf("%c", &c);
	for(i=0 ; i<=100 ; i++){
		if (c[i] == "1"){
			n++;
		} 
	}
}
