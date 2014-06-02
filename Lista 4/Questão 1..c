#include <stdio.h>
#include <string.h>

void testa1(char* text, char* encript, int* i){
	if (text[*i] == ' '){
		encript[*i] = ' ';
		(*i)++;
	}
	encript[*i] = (text[*i]+3);
}

void testa2(char* encript, int* i){
	if ((encript[*i] > 'z')||((encript[*i] > 'Z')&&(encript[*i] < 'a'))){
    	 		encript[*i] -= 26;
 	   	}
}

void finaliza(char* encript, int* i){
	encript[*i] = '\0';
}

void troca(char* text, char* encript){
	int i=0;
	while (i <= strlen(text)-1){
		testa1(text, encript, &i);
		testa2(encript, &i);
		i++;
	}
	finaliza(encript, &i);
}

void ler(char* str){
		gets(str);
}

void exibe_str(char* str){
	printf("%s", str);
}
int main(){
	char text[1000], encript[1000];
	ler(text);
	troca(text, encript);
	exibe_str(encript);
	return 1;
}
	


