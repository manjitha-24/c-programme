#include<stdio.h>
int main()
{
	int items;
	float cost,wt,tcost,twt;
	printf("\nEnter number of items:");
	scanf("%d",&items);
	printf("\ncost(in rupees):");
	scanf("%f",&cost);
	printf("\nweight(in kg):");
	scanf("%f",&wt);
	tcost =  items*cost;
	printf("tcost=%.2frupees\n",tcost,items,cost);
	twt = items*wt;
	printf("twt=%.2fkg\n",twt,items,wt);
	return 0;
}
