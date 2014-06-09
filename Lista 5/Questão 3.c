#include <stdio.h>


int ordena(int* num){
	int i, teste = 1, temp;
		while(teste == 1){
			for(i=0 ; i<2 ; i++){
				if (num[i] >= num[i+1]){
					temp = num[i];
					num[i] = num[i+1];
					num[i + 1] = temp;
				}
			}
			if((num[0] <= num[1]) && (num[1] <= num[2])){
				teste = 0;
			}
	}
	if((num[1]==num[2])&&(num[1]==num[3])) return 1;
	else return 0;
}


int main(){
	int teste = 1, i, num[3];
	for(i=0 ; i<3 ; i++){
		scanf("%d", &num[i]);
	}
	ordena(num);
	printf("%d  %d  %d", num[0], num[1], num[2]);
}
