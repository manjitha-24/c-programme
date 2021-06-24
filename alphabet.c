#include <stdio.h>

int main()
{
	char a;
	printf("enter the input");
	scanf("%c",&a);
	if ((a>= 'A' && a<= 'Z') || (a >= 'a' && a <= 'z'))
    printf("%c is an alphabet.", a);
	return 1;
}
