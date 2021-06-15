#include<stdio.h>
int main()
{
	char character;
	int num;
	float realnum;
	double dnum;
	printf("\nthe character is:");
	scanf("%c",&character);
	printf("\nthe number is:");
	scanf("%i",&num);
	printf("\nthe float is:");
	scanf("%f",&realnum);
	printf("\nthe dnum is:");
	scanf("%lf",&dnum);
	printf("\ncharacter = %c\nnum = %i\nrealnum = %f\ndnum = %lf",character,num,realnum,dnum);
}
