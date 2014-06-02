#include <stdio.h>
#include <string.h>

int main(){
	char str[1000], strr[1000];
	gets(str);
	exclui(str, strr);
	printf("%s", strr);
}

int se(char* str, int* i){
	if (str[*i] == ' '){
		(*i)++;
	}
}

void finaliza(char* str, int e){
	str[e] = '\0';
}

void recebe(char* strr, char* str, int e, int i){
	strr[e] = str[i];
}

int exclui(char* str, char* strr){
	int i = 0,e = 0;
	while ( i <= strlen(str)-1 ){
		se(str, &i);
		recebe(strr, str, e, i);
		i++;
		e++;
	}
	finaliza(strr, e);
}
