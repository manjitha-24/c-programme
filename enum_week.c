
#include<stdio.h>

enum rainbow{violet,indigo,blue,green,yellow,orange,red};

int main()
{
	enum rainbow color;
	color = blue;
	printf("The state of blue color is %d\n",color);
	int i;
	for(i=violet;i<=red;i++){
	
	    printf("%d",i);
	    printf("\n");}
	return 0;
}

