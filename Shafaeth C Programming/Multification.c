#include<stdio.h>
#include<math.h>
int main()
{
int n,mult=1,i;
printf("Enter an integer:");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
    mult = n*i;
    printf("%d*%d=%d\n", n,i,mult);

}
}
