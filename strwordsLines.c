#include <stdio.h>
#include<string.h>
int main()
{   
    int i,Characters=0,Lines=1,Words=0,len;
	char Name1[100],ch;
	printf("\nEnter the String End with $ :");
	
	while((ch=getchar())!='$')
	{
		Name1[i++]=ch;  	
	}
	Name1[i]='\0';
	len=strlen(Name1);
	printf("\n%d",len);
	printf("\n\n The String is \n\n");
	puts(Name1);
	for(i=0;i<strlen(Name1);i++)
	{
		if(Name1[i]=='\n')
		  Lines++;
		if(Name1[i]==' '||Name1[i]=='\0'||Name1[i]=='\n')
		  Words++;
		Characters++;
		
	}
	printf("\n The No. 
	
