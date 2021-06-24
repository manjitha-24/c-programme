#include<stdio.h>
struct student
{
	char name[10];
	int rno;
	struct date
	{
		int day;
		int month;
		int year;
	}dd;
}s;
int main()
{
	
	
	
	printf("name: ");
	scanf("%s",&s.name);
	
	printf("roll number: ");
	scanf("%d",&s.rno);
	
	printf("date (date:month:year) :");
	
	scanf("%d%d%d",&s.dd.day,&s.dd.month,&s.dd.year);
	
	printf("%s%4i%4d%4d%4d",s.name,s.rno,s.dd.day,s.dd.month,s.dd.year);
}
