#include <stdio.h>
 
int main()
{
  	int n, i = 1, j, Count; 
 
  	printf("\n number:  ");           
  	scanf("%d", &n);
 
 	while (i <= n)
   	{
   		Count = 0;
    	if(n % i == 0)
      	{
      		j = 1;
      		
      		while(j <= i)
      		
      		{if(i % j == 0)
      			Count++;
				j++;}
				
			if(Count == 2){
			printf("\n %d", i);}
			
      	}
    	i++;
   	}
 
  	return 0;
}
