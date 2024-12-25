#include<stdio.h>
int main()
{
int n,i,a[100],search,found=0;

printf("Enter the value :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("a[%d] :",i);
    scanf("%d",&a[i]);
}
    printf("%d\n",a[i]);

printf("Enter element to search: ");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if (a[i]== search)
{

    found=1;
    break;
}
}

if(found==1)
{
    printf("This is found at %d",i+1);
}

else{
    printf("This is not found");
}
}
