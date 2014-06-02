#include <stdio.h>
#include <string.h>

int concat(char* str1, char* str2, char* stri){ // esta função concatena duas strings e as separa com um espaço (' ').
	int i=strlen(str1), e = strlen(str2)-1, j = 0;
	while (j <= i -1){			// adiciona o primeiro string ao vetor 'stri'.
		stri[j] = str1[j];
		j++;
	}
	stri[j] = ' ';				// adiciona o espaço que vai separar as duas strings
	j = 0;
	while (j <= e){				// concatena o segundo string no vetor 'stri'.
		stri[i + 1 + j] = str2[j];
		j++;
	}
	stri[i + 1 + j] = '\0';
	return 1;
}

int main(){
	char str1[15], str2[15], stri[30];
	gets(str1);
	gets(str2);
	concat(str1, str2, stri);  // chama a função localizada na linha 4.
	printf("%s",stri);
	return 1; 	
}
