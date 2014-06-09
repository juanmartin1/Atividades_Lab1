#include <stdio.h>

int main(){
  float h;
  char sexo;
  printf("Digite a altura em metros.\n");
  scanf("%f", &h);
  printf("Digite o sexo: 'M' para masculino ou 'F' para feminino.)\n");
  scanf(" %c", &sexo);

  if ((sexo == 'M')||(sexo == 'm')){
    printf("O seu peso ideal: %f\n", 72.7*h - 58);
  }
  else{
    printf("O seu peso ideal: %f\n", 62.1*h - 44.7);
  }
}
