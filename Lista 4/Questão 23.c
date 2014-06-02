#include <stdio.h>
#include <string.h>

int main(){
	char sexo[0], nome[40], nac[20], bof[5];
	int idade, teste = 1, ts, t2;
	while (teste == 1){
		teste = 0;
		gets(nome);
		gets(sexo);
		if ((sexo[0] != 'M') && (sexo[0] != 'F')){
			if(sexo[0] == 'M') ts = 1;
			printf("O sexo nao foi valido, digite 'M' para masculino ou 'F' para feminino."); 
			break;
		}
		gets(nac);
		if ((strcmp(nac, "estrangeiro")) && (strcmp(nac, "brasileiro"))) {
			printf("A nacionalidade nao foi valida, digite 'estrangeiro' ou 'brasileiro'."); 
			break;
		}
		gets(bof);
		idade = atoi(bof);
		if ((idade < 0) || (idade > 150)){
			printf("A idade nao foi valida, digite uma idade maior que 0 e menor que 150"); 
			break;
		}
		teste = 0;
	}
	if (strcmp(sexo, "M")){
		if (idade < 18) printf("%s, %s do sexo Feminino, e menor de idade, nao esta habilitado a dirigir.", nome, nac);
		else printf("%s, %s do sexo Feminino, e maior de idade, esta habilitado a dirigir.", nome, nac);	
	}
	else{
		if (idade < 18) printf("%s, %s do sexo Masculino, e menor de idade, nao esta habilitado a dirigir.", nome, nac);
		else printf("%s, %s do sexo Masculino, e maior de idade, esta habilitado a dirigir.", nome, nac); 
	}
}
