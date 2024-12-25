#include<stdio.h>
int main()
{
int base,exp,result = 1;
printf("Enter the base:");
scanf("%d",&base);
printf("Enter the exponant:");
scanf("%d",&exp);
while(exp != 0)
{
    exp--;
    result *= base;
}
printf("The result is = %d",result);

}
