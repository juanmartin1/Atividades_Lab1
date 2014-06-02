#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler(char* str){
	gets(str);
}

int enquanto(char* str){
	int i = 0;
	while (((str[i] > 'Z') && (str[i] < 'a')) || ((str[i] < 'A') || (str[i] > 'z'))){
		i++;
	}
	return i;
}

void se (int i, int n){
	if (i>n) exit(0);
}

void se2(char* str, int i){
	if ((str[i] == 'a') || (str[i] == 'A')){
		printf("%s", str);
		exit(1);	
	}
	else exit(0);
}

int main(){
	char str[100];
	int i;
	ler(str);
	enquanto(str);
	i = enquanto(str);
	se(i, strlen(str)-1);
	se2(str, i);
}
