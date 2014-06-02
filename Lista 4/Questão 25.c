#include <stdio.h>
#include <stdlib.h>

int main(){
	char car[5][20], eco[20], bof[20];
	float Km_l[6];
	int i = 0;
	Km_l[0] = 0;
	while(i<5){
		gets(car[i]);
		gets(bof);
		Km_l[i +1] = atof(bof);
//		scanf("%f\n", &Km_l[i + 1]);
		if (Km_l[i] < Km_l[i+1]){
			*eco = *car[i];
		}
		printf("O carro %s gasta %f litros de combustivel para rodar 1000Km\n\n", car[i], 1000.0/Km_l[i + 1]);
		i++;
	}
	printf("O carro mais economico e o %s", eco);
}
