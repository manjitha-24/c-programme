#include <stdio.h>

int main()
{ 
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if (num>0)
	printf("positive number");
	if (num<0)
	printf("negative number");
	if (num==0)
	printf("number is 0");

	return 0;
}
