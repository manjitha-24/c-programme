#include<stdio.h>

enum rainbow{violet,indigo=2,blue,green=5,yellow,orange,red=3};

int main()
{
	enum rainbow color;
	printf("%d %d %d %d %d %d %d",violet,indigo,blue,green,yellow,orange,red);
	
	
	return 0;
	}
