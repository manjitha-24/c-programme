#include<stdio.h>
int main()
{
	float km,m,cm;
	printf("\n Enter kilometers:");
	scanf("%f",&km);
	m=km/1000;
	cm=km/100000;
	printf("\n Meters = %f\n Centimeters = %f",m,cm);
}
