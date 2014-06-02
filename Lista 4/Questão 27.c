#include <stdio.h>

int main(){
	int i=0;
	char str[100];
	gets(str);
	while(i<4){
		printf("%c", str[i]);
		i++;
	}
}
