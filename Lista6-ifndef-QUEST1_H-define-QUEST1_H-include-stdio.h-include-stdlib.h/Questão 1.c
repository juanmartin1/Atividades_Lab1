#include "quest1lib.h"

//Lê do usuario os caracteres a serem colocados no arquivo.
void ler(FILE *pFile){
	char c;
	while(c != '0'){
		scanf("%c", &c);
		fwrite (& c , sizeof(char), sizeof(char), pFile);
	}
}

//Imprime na tela os caracteres digitados.
void imprime(FILE *pFile){
	char Linha[100];
	int i;
	i = 1;
	while (!feof(pFile)){
		fgets(Linha, 100, pFile);
		printf("Linha %d : %s",i,Linha);
		i++;
	} 
}

//Coloca o ponteiro apontando para o inicio do arquivo. 
void reiniciap(FILE *pFile){
	rewind(pFile);
}

//Verifica se o arquivo foi criado corretamente, chama a função 'ler', a função 'rewind' e fecha o arquivo com o 'fclose'.
void se(FILE *pFile){
	if (pFile){
		ler(pFile);
		reiniciap(pFile);
		imprime(pFile);
		fclose(pFile);
	}
}

int main (){
	FILE *pFile;
	//Cria  e abre o arquivo 'arq.txt'.
	pFile = fopen("arq.txt", "w+");
	se(pFile);
	return 0;
}
