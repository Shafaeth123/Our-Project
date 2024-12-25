#include<stdio.h>
int main()
{
    int a[101],i,n;

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
printf("Even number are:\n");
for(i=0;i<n;i++)
{
    if(a[i]>=0)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
    }
}
    printf("Odd number are:\n");
for(i=0;i<n;i++)
{
    if(a[i]>=0)
    {
        if(a[i]%2==1)
        {
            printf("%d\n",a[i]);
        }
    }
}
}
