#include <stdio.h>

void le_notas(int* n1, int* n2){
	scanf("%d", n1);
	scanf("%d", n2);
}

int calc_media(int n1, int n2, float* med, float* medp){
	*med = (n1*1.0 + n2*1.0)/2.0;
	*medp = (n1*1.0 + n2*2.0)/3.0;
}

int exibe_dados(int n1, int n2, int med, int medp){
	printf("As notas foram: \nN1 = %d\nN2 = %d\n\nA media foi: %d.\nA media ponderada foi: %d.", n1, n2, med, medp);
}

int main(){
	float med, medp;
	int n1, n2;
	le_notas(&n1, &n2);
	calc_media(n1, n2, &med, &medp);
	exibe_dados(n1, n2, med, medp);
	
}
