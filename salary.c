#include<stdio.h>
int main()
{
	int empID,hrs,amtPerhr;
	float salary;
	printf("\nEmployees ID:");
	scanf("%d",&empID);
	printf("\nTotal worked hours in a month and the amount he received:");
	scanf("%d%d",&hrs,&amtPerhr);
	salary = hrs*amtPerhr;
	printf("salary in a month=%.2f",salary,hrs,amtPerhr);
	return 0;
	
}
