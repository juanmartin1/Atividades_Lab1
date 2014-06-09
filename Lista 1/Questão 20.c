#include <stdio.h>

int main(){
	float Mb, Mbps;
	printf("Digite o tamanho do arquivo (em MB)\n");
  	scanf("%f", &Mb);
  	printf("Digite a velocidade de download (em Mbps)\n");
  	scanf("%f", &Mbps);
	printf("O tempo de download e: %.3fmin", Mb/Mbps/60.0);	
	return 0;
}
