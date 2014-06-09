#include <stdio.h>

int main(){
	printf("o primeiro recebeu %f", 780000*0.46);
	printf("O segundo recebeu %f", 780000*0.32);
	printf("e o terceiro recebeu %f", 780000 - (780000*0.46 + 780000*0.32));
}

