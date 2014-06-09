#include <stdio.h>

int main(){
	float Sh, Hm;
	scanf("%f %f", &Sh, &Hm);
	printf("\nO seu salario Bruto e: R$%f", Sh*Hm);
	printf("\nVoce pagou R$ %f de Imposto de Renda", Sh*Hm*0.11);
	printf("\nVoce pagou R$ %f para o sindicato", Sh*Hm*0.05);
	printf("\nVoce pagou R$ %f de INSS", Sh*Hm*0.08);
	printf("\nSeu salario Liquido e: R$ %f", Sh*Hm - (Sh*Hm*0.11 + Sh*Hm*0.08 + Sh*Hm*0.05));
	return 0;
}
