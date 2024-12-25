#include<stdio.h>
int main()
{
int n,i,j,temp,a[100];

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
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[j]>a[i])
        {


        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

}
}
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
}
