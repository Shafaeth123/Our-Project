#include<stdio.h>
#include<math.h>
int main()
{
int c,i,n,arm=0,r;

printf("Enter an integer:");
scanf("%d",&n);
c=n;
while(n!=0)
{
r=n%10;
arm=(r*r*r)+arm;
n=n/10;
}
if(arm==c)
{
printf("This is armstrong: %d",arm);
}
else{
    printf("This is not armstrong");
}
}
