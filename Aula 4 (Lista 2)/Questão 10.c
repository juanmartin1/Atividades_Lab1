#include <stdio.h>
#include <string.h>

int main(){
	char str[1000], strr[1000];
	gets(str);
	exclui(str, strr);
	printf("%s", strr);
}

int exclui(char* str, char* strr){
	int i = 0,e = 0;
	while ( i <= strlen(str)-1 ){
		if (str[i] == ' '){
			i++;
		}
		strr[e] = str[i];
		i++;
		e++;
	}

}
