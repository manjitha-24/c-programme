#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("enter the number the number of rows and columns:");
	scanf("%d%d",&r,&c);
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
