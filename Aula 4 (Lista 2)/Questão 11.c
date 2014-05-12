#include <stdio.h>

int main(){
	float id, temp;
	scanf("%f", &id);
	scanf("%f", &temp);
	if ((id>=65) || ((id>=60) && (temp>=25)) || (temp>=30)){
		printf("Pode se aposentar");
	}
	else{
		printf("Nao pode se aposentar");
	}
}
