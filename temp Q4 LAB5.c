#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
	float rad=0;
	float area=0, circum=0, root=0;
	
	printf("enter radius.. ");
	scanf("%f", &rad);
	area=pi*(rad*rad);
	circum=2*pi*rad;
	root=sqrt(rad);
	printf("Area= %.2f\n circumference= %.2f\n Square root of radius= %.2f", area, circum, root);
	return 0;
}

