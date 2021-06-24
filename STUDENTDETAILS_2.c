#include<stdio.h>
struct student
{
	char NAME[10];
	int RNO;
	int MARKS[3];
};
int main()
{
    struct student s[60];
	int i,n,j;
	printf("enter number of students: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("name: ");
		scanf("%s",&s[i].NAME);
	
	printf("roll number: ");
	scanf("%d",&s[i].RNO);
	printf("marks of three subjects");
	for(j=0;j<3;j++)
	scanf("%d",&s[i].MARKS[j]);
}
	

	

	
	printf("\nstudents details are: \n");
	printf("-------------------------------------\n");
	printf("NAME     RNO     M1       M2       M3");
	for(i=0;i<n;i++){
	printf("\n%s%5d",s[i].NAME,s[i].RNO);
	for(j=0;j<3;j++)
	printf("%5d",s[i].MARKS[j]);
    }

	return 0;
	
	
}

