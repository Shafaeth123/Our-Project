#include<stdio.h>
#include<math.h>
int main()
{
int x,y,result=1;
printf("Enter value of x:");

scanf("%d", &x);

printf("Enter value of y:");

scanf("%d",&y);
while(y!=0)

{

        result *=x;
    --y;
}
printf("Result= %d",result);
}
