#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
}c;
int main()
{
	struct complex c1;
	printf("\n Enter real part :");
	scanf("%d",&c.real);
	printf("\n Enter Imaginary part :");
	scanf("%d",&c.imaginary);
	if (c.imaginary<0)
	printf("\n The complex number is : %d %di ",c.real,c.imaginary);
	else
	printf("\n The complex number is : %d + %di",c.real,c.imaginary);

}
