#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char str[100];
	gets(str);
	i = strlen(str) -1;
	while(i >= 0){
		printf("%c", str[i]);
		i--;
	}
}

