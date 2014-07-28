#include "quest3lib.h"

int tamanhoarq(FILE *pFile){
  fseek (pFile , 0 , SEEK_END);
  return ftell (pFile);
}

//void read(FILE *pFile1, FILE *pFile2, char* c1, char* c2){
//	fread(c1, sizeof(char), sizeof(c1), pFile1);
//	fread(c2, sizeof(char), sizeof(c1), pFile2);
//}

int main (){
	char c1[1000], c2[1000];
	FILE *pFile1;
	FILE *pFile2;
	FILE *pFile3;
	//Cria  e abre o arquivo 'arq.txt'.
	pFile1 = fopen("arq1.txt", "r");
	pFile2 = fopen("arq2.txt", "r");
	pFile3 = fopen("arq3.txt", "w+");
	if(pFile1){
		if(pFile2){
			if(pFile3){
//				read(pFile1, pFile2, c1, c2);
				fread(c1, sizeof(char), sizeof(c1), pFile1);
				fread(c2, sizeof(char), sizeof(c2), pFile2);
				
				fwrite(c1, sizeof(char), sizeof(c1), pFile3);
				fwrite(c2, sizeof(char), sizeof(c2), pFile3);


				fclose(pFile1);
				fclose(pFile2);
				fclose(pFile3);
			}
		}
	}
	return 0;
}
