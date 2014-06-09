#include <stdio.h>

void cadastroh(int* hCheg, int* mCheg){
  	printf("Digite a hora de chegada desta forma: (h m)\n");
  	scanf("%d %d", hCheg, mCheg);
    while ((*hCheg >= 24)||(*mCheg >= 60)){
        printf("Horario invalido\n");
        printf("Digite novamente a hora de chegada desta forma: (h m)\n");
        scanf("%d %d", hCheg, mCheg);  
    }	
}


int main(){
  int hCheg, mCheg, hSaida, mSaida, h;
  float V = 0.0;
  cadastroh(&hCheg, &mCheg);
  cadastroh(&hSaida, &mSaida);

  if (hCheg > hSaida) h = 24 + hSaida - hCheg;
  else h = hSaida - hCheg;
  if (mCheg != mSaida) h += 1;

  int i;
  for (i = 0; i < h; i++){
    if ((i == 0)||(i == 1)) V += 1.0;
    else if ((i == 2)||(i == 3)) V += 1.4;
         else V += 2.0;
  }
  printf("\nPermanencia foi de: %d horas\nValor: %f\n", h, V);
}
