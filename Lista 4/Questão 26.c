#include <stdio.h>
#include <stdio.h>

int main(){
	int mat[10], cod_disc[10], nL = 0, i = 0;
	float nota1[10], nota2[10], med_pon[10];
	char nome[10][100], comnd[1];
	printf("Quer iniciar o programa? Digite 'i', se não digite 's' para sair.\n");
	gets(comnd);
	printf("Digite o nome do aluno.\n");
	while (comnd[0] != 's'){
		gets(nome[nL]);
		if(nome[nL][0] == 's') break;
		printf("Digite o numero de matricula.\n");
		scanf("%d", &mat[nL]);
		printf("Digite o cod.disc do aluno.\n");
		scanf("%d", &cod_disc[nL]);
		printf("Digite a nota 1 do aluno.\n");
		scanf("%f", &nota1[nL]);
		printf("Digite o nota 2 do aluno.\n");
		scanf("%f", &nota2[nL]);
		med_pon[nL] = (nota1[nL] + nota2[nL]*2.0)/3.0;
		nL++;
		printf("Para terminar digite 's'. Ou digite o nome do proximo Aluno\n");
		gets(comnd);
	}
	while(i < nL){
		printf("\nO aluno: %s , de numero de matricula: %d, cond.disc: %d ficou com media: %.2f", nome[i], mat[i], cod_disc[i], med_pon[i]);
		i++;
	}
}
