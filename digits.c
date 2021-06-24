#include<stdio.h>
int main()
{
	int a,res,reverse=0;
	printf("enter the integer:");
	scanf("%d",&a);
	
	while (a!=0)
	{
		res=a%10;
		a=a/10;
		
		printf("%d\n",res);
	}
	
}
