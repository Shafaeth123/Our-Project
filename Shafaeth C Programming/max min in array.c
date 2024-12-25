#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0,max,min;
    float average;
    printf("Enter number:");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
}
       for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
}
max =a[0];
 for(i=0;i<n;i++)
    {
if(max < a[i])
{
    max=a[i];
}
    }
   printf("maximum number is %d\n",max);

   min =a[0];
 for(i=0;i<n;i++)
    {
if(min > a[i])
{
    min=a[i];
}
    }
       printf("minimum number is %d",min);
}
