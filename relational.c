#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	bool less,great,lessequal,greatequal,notequal;
	printf("\n Enter two integers:");
	scanf("%d%d",&a,&b);
	less = a<b;
	great= a>b;
	lessequal = a<=b;
	greatequal = a>=b;
	notequal = a!=b;
	printf("\n less=%d\n great=%d\n lessequal=%d\n greatequal=%d\n notequal=%d",less,great,lessequal,greatequal,notequal);
}
