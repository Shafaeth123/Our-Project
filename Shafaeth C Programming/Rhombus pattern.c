#include<stdio.h>
int main()
{
    int i,n,j,k;

    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=6;i++)
    {

    for(j=1;j<=i;j++)
{
   printf(" ");
}
for(k=1;k<=4;k++)
{
       printf("* ");

}
printf("\n");
    }
}
