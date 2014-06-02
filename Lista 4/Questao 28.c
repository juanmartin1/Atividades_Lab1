#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[100], bof[10], sexo[1];
	int idade;
	gets(nome);
	gets(sexo);
	gets(bof);
	idade = atoi(bof);
	if ((sexo[0] == 'f') && (idade < 25)){
		printf("%s, ACEITA", nome);	
	}
	else printf("NAO ACEITA");
}


