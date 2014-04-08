#include <stdio.h>

int main()
{
	int x,y,z;
	printf("|   x |   y |   z |\n");
	x = y=  10;
	printf("| %3d | %3d | %3d |\n",x,y,z);
	z = (x++);
	printf("| %3d | %3d | %3d |\n",x,y,z);
	x = -x;
	printf("| %3d | %3d | %3d |\n",x,y,z);
	y++;
	printf("| %3d | %3d | %3d |\n",x,y,z);
	x = x + y - (z--);
    printf("| %3d | %3d | %3d |\n",x,y,z);
	return 0;
	
}


