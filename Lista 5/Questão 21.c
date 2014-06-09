#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int verifica(char* str1, char* str2){
	int i, j, e = 0, n1 = strlen(str1), n2 = strlen(str2);
	char* p1;
	char* p2;
    p1 = str1;
	p2 = str2;
	for (i=0 ; i <= n1 ; i++){
		if(i > n1 - n2 + 1) {
			printf("Não contem");
			exit(1);
		}
		if(*p1 == *p2){
			e++;
			p2++;
			if(e==n2){
				printf("Contem");
				return 0;
			}
		}
		else {
			for(j=0 ; j<e ; j++) p2--;
			e = 0;
		}
		p1++;
	}
}

int main(){
	char str1[100], str2[100];
	gets(str1);
	gets(str2);
	verifica(str1, str2);
}
