#include <stdio.h>
#include <string.h>

void troca(char* text, char* encript){
	int i=0;
	while (i <= strlen(text)-1){
		if (text[i] == ' '){
			encript[i] = ' ';
			i++;
		}
		encript[i] = (text[i]+3);
		if (((int)(encript[i]) > 122)||((int)(encript)[i] > 90)&&((int)(encript[i]) < 97)){
    		encript[i] -= 26;
 	   	}
		i++;
	}
	encript[i] = '\0';
}

int main(){
	char text[1000], encript[1000];
	gets(text);
	troca(text, encript);
	printf ("%s", encript);
	return 1;
}
	


