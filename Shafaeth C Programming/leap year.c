#include<stdio.h>
int main()
{
int N;
printf("Enter a year:");
scanf("%d",&N);
if((N%400==0 || N%4==0)&&(N%100!=0))
{
    printf("This is leap year");
}
else{
    printf("not");
}

}
