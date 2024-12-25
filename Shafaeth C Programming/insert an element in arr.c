#include<stdio.h>
int main()
{
    int a[101],i,n,pos,x;

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
printf("\nEnter the new element to be inserted: ");
    scanf("%d", &x);
printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);
    n=n+1;
for(i=n-1;i>=pos;i--)
{
    a[i]=a[i-1];
}
a[pos-1]=x;
for(i=0;i<n;i++)
{
     printf("%d\n",a[i]);
}
}
