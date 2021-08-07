#include<stdio.h>

enum rainbow { violet=4,indigo,blue=5,green=6,yellow,orange,red};

int main()
{	
    int i;
	enum rainbow color;
	color = blue;
	printf("The state of blue color is %d\n",color);

	for(i=violet;i<=red;i++){
	    printf("%d",i);
	    printf("\n");}
	    
	return 0;
}

