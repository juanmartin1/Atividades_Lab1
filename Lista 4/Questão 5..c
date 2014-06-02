#include <stdio.h>
#include <string.h>


void enquanto1(char* contida, char* str1, char* str2, int* i, int* j, int* e){
	while (str1[*i] == str2[*j]){
		contida[*e] = str2[*j];
		(*i)--;
		(*j)--;
		(*e)++;
	}	
}

int verifica(char* str1, char* str2, char* contida){
	int e = 0, i = strlen(str1)-1, j = strlen(str2)-1;
		enquanto1(contida, str1, str2, &i, &j, &e);
	return 0;
}

void enquanto2(char* temp, char* contida, int* k, int* m){
	while(*m<*k){
		temp[0] = contida[*k];
		contida[*k] = contida[*m];
		contida[*m] = temp[0];
		(*k)--;
		(*m)++;
	}
}

int inverte(char* contida){
	char temp[1];
	int k = strlen(contida)-1, m = 0;
	enquanto2(temp, contida, &k, &m);
	return 1;
}

void ler(char* str){
		gets(str);
}

void exibe_str(char* str){
	printf("%s", str);
}

int main(){
	char str1[1000], str2[1000], contida[1000];
	ler(str1);
	ler(str2);
	verifica(str1, str2, contida);
	inverte(contida);
	exibe_str(contida);
	return 2;
}

