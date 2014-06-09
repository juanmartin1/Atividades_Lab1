#include <stdio.h>

int main(){
	int i, e, n;
	for (e=0 ; e<=3 ; e++){
		scanf("%d", &n);
		for (i=1 ; i <= 100 ; i++){
			printf("%d", i);
		}
	}
	return 0;
}

int wh(){
	int i=1,e=1,n=0;
	while (e <= 3){
		scanf("%d", &n);
		e++;
		while (i<=100){
			printf("%d", i);
			i++;
		}
	}
}

int dwh(){
	int i = 1,e=1,n;
	do {
		do{
			printf("%d", i);
			i++;
		} while (i<=100);
		e++;
	} while (e<=3);
	
	
	
}
