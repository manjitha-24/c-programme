#include<stdio.h>
int main()
{
	int num,i,j,c;
	printf("enter number till where u want the prime numbers: ");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		c=0;
		for(j=1;j<=i;j++){
			c++;
		}
		if(c==2){
		
		printf("%d",i);}
	}return 0;
}
