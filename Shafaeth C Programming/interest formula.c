#include<stdio.h>

int main()
{
float principle,rate,CI,y,x=1;
int time;
printf("Enter Principle:");
scanf("%f",&principle);

printf("Enter Rate:");
scanf("%f",&rate);
  printf("Enter time:");
scanf("%d",&time);
//compound interest formula apply
//Simple Interest = Principal * Rate * Time​ / 100
// using pow, CI= principle*(pow((1+rate/100),tim);
y = (1+rate/100);
while(time!=0)
{
  x *=y;
  --time;

}
CI = principle * x;


printf("The result of CI is : %f",CI);


}
