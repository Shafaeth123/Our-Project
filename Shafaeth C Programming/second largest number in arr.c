#include<stdio.h>
int main()
{
    int a[101],i,n,max,second_max;

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
max=a[0];
for(i=0;i<n;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
}
second_max=a[0];
for(i=0;i<n;i++)
{
    if(a[i] > second_max && a[i] < max)
    {
       second_max=a[i];
    }
}
printf("First largest = %d\n", max);
    printf("Second largest = %d", second_max);
}
