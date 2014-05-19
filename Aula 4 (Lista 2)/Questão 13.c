#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	gets(str);
	adiciona(str);
	printf("%s", str);
	return 1;
}

int adiciona(char* str){
	int i;
	for (i=0 ; i<strlen(str) ; i++){
		str[i] += 1;
	}
}
