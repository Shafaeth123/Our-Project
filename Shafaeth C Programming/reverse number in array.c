#include<stdio.h>
int main()
{
    int a[100],i,n;
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
printf("Reverse number:\n");
  for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
}
}
