#include <stdio.h>
#include <string.h>

int main(){
	int i=0, j=0, e = 0, teste = 1, teste2 = 1, cont;		
	char aluno[40][100], nome[100];
	while (teste == 1){								// este blogo de repeti��o grava os alunos digitados em uma matriz de uma 40 linhas e 100 colunas. 
		printf("Digite o nome do aluno.\n");
		gets(aluno[i]);								// recebe o nome do aluno, do teclado.
		i++;
		printf("Voce deseja continuar adicionando alunos? Se sim digite '1', Se n�o digite '0'.\n");
		scanf("%d\n", &teste);						// caso 1 o bloco continua a gravar nome, caso 0 o bloco � terminado.
		if(i == 39){								// Como so podem ser gravados 40 nomes, caso sejam digitados 40 nomes o bloco � encerrado. 
			printf("Voce ja digitou 40 nomes.\n");
			teste = 0;
		}	
	}
	printf("Voce deseja procurar algum aluno? Se sim digite '1', Se n�o digite '0'.\n");
	scanf("%d\n", &teste);							
	while(teste == 1){								// Caso 1 o bloco de busca de nomes continua, caso 0 o bloco � encerrado.
		printf("Digite o nome todo um dos nomes do aluno que voce deseja procurar.\n");
		gets(nome);									// L� o nome a ser buscado do teclado.
		while (teste2 == 1){					//Enquanto n�o forem encontrados n = strlen(nome) 'sendo nome o nome digitado', iguais nos dois vetores(aluno[i] e nome) o programa continua a procurar. 
			while(i < strlen(aluno[i])){
				while(j < strlen(nome)){
					if (nome[j] ==  aluno[i][e]){
						cont++;
						e++;
						j++;
						if (cont == strlen(nome)-1) break;
					}
					else{
						cont = 0;
						e++;
						j = 0;
					}
				}
				if (cont == strlen(nome)-1) break;
				else j++;
			} 
			if (cont == strlen(nome)-1) teste = 0;
			else i++;
			if(i==39) break;
		}
		printf("O aluno que voc� procura � %s.\n O qual esta na posi��o %d\n", aluno[i], i);
		printf("\nVoce deseja procurar mais algum aluno? Se sim digite '1', Se n�o digite '0'.\n");
		scanf("%d\n", &teste);	
	}
}

