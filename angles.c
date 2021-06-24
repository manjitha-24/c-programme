#include<stdio.h>
int main()
{
	float a,b,c;
	printf("\n Enter two angles a,b in degrees: ");
	scanf("%f%f",&a,&b);
	c = (180-(a+b));
	printf("\n The third angle is %.2f",c);
	return 1;
}
