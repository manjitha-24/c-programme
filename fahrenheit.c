#include<stdio.h>
int main()
{
	float c,f;
	printf("\nEnter temperture in fahrenheit:");
	scanf("%f",&f);
	c = (f-32)*5/9;
	printf("\nCelsius = %f",c);
}
