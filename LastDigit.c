#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number:");
	scanf("%d",&num);
	num = num%10;
	printf("\n num=%d",num);
	return 0;
}
