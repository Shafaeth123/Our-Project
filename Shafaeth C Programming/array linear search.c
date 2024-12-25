#include<stdio.h>
int main()
{
int value,i,pos=0,a[]={10,20,30,40,50};

printf("Enter the value you want to search:");
scanf("%d",&value);
for(i=0;i<5;i++)
{
    if(value==a[i])
{
   pos=i+1;
   break;
}

}
if(pos==0)
{
    printf("Item is not found");
}
else{
    printf("The value of found at %d position", pos);
}
}
