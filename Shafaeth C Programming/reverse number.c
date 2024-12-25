#include<stdio.h>
int main()
{
int n,i;
printf("Enter an integer: ");
scanf("%d",&n);
while(n!=0)
{
    i=n%10;
printf("%d",i);
    n=n/10;
}

}
