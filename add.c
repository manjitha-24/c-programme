#include<stdio.h>
int main()
{
	int a,b,*aptr,*bptr,sum;
	printf("enter two integers: ",a,b);
	scanf("%d%d",&a,&b);
	aptr = &a;
    bptr = &b;
    sum = *aptr+*bptr;
	printf("sum is : %d",sum);
	return 1; 
	
}
