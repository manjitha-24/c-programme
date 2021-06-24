#include<stdio.h>
#include<string.h>
int main()
{
	int n,ncmp;
	char name1[100],name2[100];
	printf("\n eneter str1:");
	gets(name1);
	//len1=strlen(name1);
	printf("\n enter str2:");
	gets(name2);
	//len2=strlen(name2);
	//strcat(name2,name1);
	ncmp=strncmp(name1,name2,n);
	puts(name2);
	puts(name1);
	//printf("length1 is %d\n",len1);
	//printf("length2 is %d\n",len2);
	printf("\n enter n:",n);
	puts(n);
	printf("compares: %d\n",ncmp);
    return 1;
}
