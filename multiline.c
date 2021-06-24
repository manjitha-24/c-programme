#include<stdio.h>
int main()
{
	int i;
	char a[100],ch;
	printf("enter a string: ");
	while(ch != '$')
	{
		ch=getchar();
		a[i]=ch;
		i++;}
	a[--i]='\0';	
	printf("string is: %s",a);
	return 0;
}
