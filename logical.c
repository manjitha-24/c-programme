#include<stdio.h>
int main()
{
	int a=2,b=2,result;
	result = (a==b)&&(a>b);
	printf("a==b && a>b is %d \n",result);
	result =(a==b)||(a>b);
	printf("(a==b)||a>b is %d \n",result);
	result = !(a==b);
	printf("!(a==b) is %d \n",result);
	return 0;
	
}
