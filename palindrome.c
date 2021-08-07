#include<stdio.h>
int main()
{
	int n1,n2,n3,original,reversed=0,rem,largest;
	printf("enter 2 numbers whose product is a palindrome: ");
	scanf("%d%d",&n1,&n2);
	n3 = n1*n2;
	original = n3;
	while(n3 != 0){
		rem = n3%10;
		reversed = reversed * 10 + rem;
		n3/=10; 
	}

	if(original == reversed)
		{
			for(largest=0;largest<1000;largest++)
		}
	else
		printf("%d is not palindrome ",original);
		
	return 0;
		
}
