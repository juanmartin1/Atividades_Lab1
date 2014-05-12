#include <stdio.h>

int main(){
	int nhab, cod, i = 0;
	float vkwh = 0.0, nres = 0, ncom = 0, nind = 0, constot = 0.0, con = 0.0, CM = 0.0, cm = 999999.0;
	scanf("%f", &vkwh);
	scanf("%d", &nhab);
	while ( i <= nhab ){
		scanf("%d", &con, &cod);
		if cod == 1{
			nres += con;
		}
		if cod == 2{
			ncom += con;
		}
		if cod == 3{
			nind += con;
		}			
		constot += con;		
		if (con <= cm){
			cm = con;
		}
		if (con >= CM){
			CM = con;
		}
	}
	printf("A media foi %f, o maior consumo foi %f, o menor consumo foi %f", constot/nhab, CM, cm);
	printf("O consumo da categoria 1 foi %f, o da 2 foi %f, o da 3 foi %f", nres, ncom, nind);
}
