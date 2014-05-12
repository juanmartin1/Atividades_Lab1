#include <stdio.h>
#include <stdlib.h>

float lerf(){
	float x ;
	scanf("%f", &x);
	return x;
}

int lerd(){
	int x;
	scanf("%d", &x);
	return x;
}

int ifm(int con, int cm){
	if (cm > con){
		cm = con;
	}
	return cm;	
}


int ifM(int con, int CM){
	if (CM < con){
		CM = con;
	}
	return CM;	
}


int main(){
	int nhab, cod, i = 0;
	float V = 0, vkwh = 0.0, nres = 0, ncom = 0, nind = 0, constot = 0.0, con = 0.0, CM = 0.0, cm = 999999.0;
	vkwh = lerf();
	nhab = lerd();
	while (i < nhab){
		con = lerf();
		cod = lerd();
		V =con*vkwh;
		switch(cod){
		case 1:
			nres += con*V;
			break;
		case 2:
			ncom += con*V;
			break;
		case 3:
			nind += con*V;
			break;
		}
		i++;
		constot += con*vkwh;		
		cm = ifm(V, cm);
		CM = ifM(V, CM);
	}
	printf("A media foi %f, o maior consumo foi %f, o menor consumo foi %f", constot/nhab, CM, cm);
	printf("O consumo da categoria 1 foi %f, o da 2 foi %f, o da 3 foi %f", nres, ncom, nind);
}

