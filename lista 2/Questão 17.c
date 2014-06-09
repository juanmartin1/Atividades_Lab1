#include <stdio.h>

int main(){
  float h, peso, imc;
  printf("Digite a altura em metros.\n");
  scanf("%f", &h);
  printf("Digite o peso\n");
  scanf("%f", &peso);
  imc = peso/(h*h);
  if (imc < 18.5) printf("Abaixo do peso\n");
  else if (imc < 25) printf("Saudavel\n");
	  else if (imc < 30) printf("Peso em excesso\n");
		  else if (imc < 35) printf("Obesidade Grau I\n");
			  else if (imc < 40) printf("Obesidade Grau II(severa)\n");
				  else printf("Obesidade Grau III(morbida)\n");
}
