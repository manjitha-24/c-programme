#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
};
int main()
{
	struct complex c[5];
	int i,n;
	printf("enter number of complex numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("\n Enter real part of %d :",i+1);
	scanf("%d",&c[i].real);
	printf("\n Enter Imaginary part of %d :",i+1);
	scanf("%d",&c[i].imaginary);}
		
	
    for(i=0;i<n;i++){
	
	if (c[i].imaginary<0)
	printf("\n The complex number is : %d %di ",c[i].real,c[i].imaginary);
	else
	printf("\n The complex number is : %d + %di",c[i].real,c[i].imaginary);

}
    return 0;}
