#include<stdio.h>
int main()
{
int i,j;
for(i=1; i<=5;i++)//rows
{

for(j=5;j>=i;j--) //columns
    {
        printf("*  ");
    }
        printf("\n");
}
}
