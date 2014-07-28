#include "quest2lib.h"

//conta o numero de linhas do arquivo.
int countL(FILE *pFile){
	char Linha[100];
	int i;
	i = 1;
	while (!feof(pFile)){
		fgets(Linha, 100, pFile);
		i++;
	} 
	return --i;
}

int main (){
	FILE *pFile;
	//Cria  e abre o arquivo 'arq.txt'.
	pFile = fopen("arq.txt", "r");
	printf("%d", countL(pFile));
	fclose(pFile);
	return 0;
	
}
