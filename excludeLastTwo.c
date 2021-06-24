#include<stdio.h>
int main()
{
	int num;
	printf("\n Enter the number:");
	scanf("%d",&num);
	num = num/10;
	num=num/10;
	printf("\n Number=%d",num);
	return 0;
}
