#include <stdio.h>

int main(){
	int i;
	float f;
	char c;
	
	i = 10;
	f = 10.10;
	c = 'w';
	
	int* point_i;
	float* point_f;
	char* point_c;
	
	point_i = &i;
	point_f = &f;
	point_c = &c;
	
	printf("Antes:  ||  %d   ||  %.2f  ||  %c  ||", i, f, c);
	
	*point_i = 100;
	*point_f = 100.100;
	*point_c = 't';	

	printf("Depois:  ||  %d   ||  %.3f  ||  %c  ||", i, f, c);
}
