#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0,search,found;
    float average;
    printf("Enter number:");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
                printf("%d\n",a[i]);

}
printf("Enter search number:");
scanf("%d",&search);
found = 0;
 for(i=0;i<n;i++)
    {
if(search==a[i])
{
    found=1;
    break;
}
}
if(found=1)
{
    printf("this element position is %d",i+1 );
}
 else{
        printf("There is no element like this");
    }
}
