#include<stdio.h>
#include<math.h>
int main()
{
int i,n,fact=1;
printf("Enter an integer:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact*=i;
}
printf("Factorial of %d is: %d",n,fact);
}
