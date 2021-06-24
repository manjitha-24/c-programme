#include<stdio.h>
int main()
{
  int n=5, ps = 0, ns = 0, num,i;
      
      for(i=1;i<=n;i++)
      {
            scanf("%d",&num);
            if(num > 0)
                  ps=ps+num;
            else
                  ns=ns+num;
      }
      printf("Sum of Positive Numbers = %d\nSum of Negative Numbers = %d",ps,ns);
      return 0;
}
