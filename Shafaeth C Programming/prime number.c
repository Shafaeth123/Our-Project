#include<stdio.h>
int main()
{
int n,count=0,i;
printf("Enter a positive  : ");
scanf("%d",&n);
for(i=2;i<n;i++)
{
 if(n%i==0)
{
      count++;
      break;
}
}
if(count==0)
{
    printf("This is prime number");
}
else{
    printf("This not prime number");
}
}
