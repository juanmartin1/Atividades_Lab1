#include <stdio.h>

int main(){
	float Mb, Mbps;
	scanf ("%f %f", &Mb, &Mbps);
	printf("O tempo de download e: %fmin", Mb/Mbps/60.0);	
	return 0;
}
