#include <stdio.h>

int main(){
	char c1[20], c2[20];
	scanf("%s", &c1);
	scanf("%s", &c2);
	printf("Voce digitou os strings: %s, %s\n", c1, c2);
	printf("A segunda letra das duas palavras e respectivamente: %c, %c", c1[1], c2[1]);
	return 0;
}
