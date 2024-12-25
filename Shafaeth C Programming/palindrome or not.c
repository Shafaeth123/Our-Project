#include<stdio.h>
int main()
{
int n,i,c,sum=0;
printf("Enter an integer: ");
scanf("%d",&n);
c=n;
while(n>0)
{
    i=n%10;
    sum= i + (sum*10);

    n=n/10;
}
if(c==sum)
{
    printf("this palindrome");
}
else{
    printf("not palindrome");
}
}
