#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], b[10][10];
 	int Addition[10][10];
  
 	printf("\n  Enter Number of rows and columns  :  ");
 	scanf("%d%d",&rows,&columns);
 
 	printf("\n  Enter the First Matrix Elements\n");
 	for(i = 0; i < rows; i++)
  	{
   		for(j= 0;j<columns;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
   
 	printf("\n Enter the Second Matrix Elements\n");
 	for(i = 0; i < rows; i++)
  	{
   		for(j= 0;j<columns;j++)
    	{
      		scanf("%d", &b[i][j]);
    	}}
 	
    for(i = 0; i < rows; i++)
  	{
   		for(j= 0;j<columns;j++)
 	
    	{
      		Addition[i][j] = a[i][j] + b[i][j];    
   	 	}
  	}
 
 	printf("\n The Sum of Two Matrix a and b \n");
 	for(i = 0; i < rows; i++)
  	{
   		for(j= 0;j<columns;j++)
 	
 	
    	{
      		printf("%d \t ", Addition[i][j]);
    	}
    	printf("\n");
  	}
 	return 0;
}
