#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if (a%3==0 && a%8==0)
	printf("divisible by 3 and 8\n");
	else if (a%8==0)
	printf("divisible by 8\n");
	else if (a%3==0)
	printf("divisible by 3 \n");
	else
	printf("not divisible by 3 or 8\n");
	return 1;
}
