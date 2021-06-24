#include<stdio.h>

struct employee
{
	int empID;
	float salary;
	char name[20];
}s;
int main()
{
    s.empID=9;
    s.salary=300000;
    printf("enter name: ");
    scanf("%s",&s.name);
    printf("\n employee details are: \n");
	printf("\n name: %s\n",s.name);
	printf("\n employee ID: %i\n",s.empID);
	printf("\n salary: %f\n",s.salary);
	return 0;
	
	}

	

