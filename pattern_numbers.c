#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a[10][10],i,j,r,c;
	printf("enter the number: ");
	scanf("%d",&a[10][10]);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);

			
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%4d",a[i][j]);
			
		}
		printf("\n");
		
	}
	return 0;
}
