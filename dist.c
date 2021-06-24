#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,d;
	
	printf("(x1,y1)\n");
	scanf("%i%i",&x1,&y1);
	
	printf("(x2,y2)\n");
	scanf("%i%i",&x2,&y2);
	
	d=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("\ndistance = %.4f",sqrt(d));
	
	
}
