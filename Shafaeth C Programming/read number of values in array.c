#include<stdio.h>
int main()
{
int n,i,a[100];

printf("Enter the value :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("a[%d] :",i);
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);

}
   for(i=n-1;i>=0;i--)
{
    printf("%d\n",a[i]);

}

}
