#include<stdio.h>
int main()
{
   int i,n,sum=0;
   printf("Enter last number:");
   scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      sum += i*i;
      }
      printf("%d",sum);
}
