#include <stdio.h>

void add(int* num, int n){
	int i = 0;
	while(i<n){
		printf("\nDigite a numero da posição %d\n", i);
		scanf("%d", &num[i]); i++;
	}
}

void maxi(int* num, int n, int* i, int* max){
	int e = 0, temp;
	while(e < n){
		if (*max <= num[e]){
			if(num[e] != *max) *i = 0;
			*max = num[e];
			(*i)++;
		}
		e++;
	}
}

int main(){
	int n, i, max = 0;
	scanf("%d", &n);
	int num[n];
	add(num, n);
	maxi(num, n, &i, &max);
	printf("%d, %d", max, i);
}
