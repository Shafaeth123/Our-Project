#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,r1,r2,d;
printf("Enter the values of a,b,c:");
scanf("%f %f %f",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
    r1=-b+sqrt(d)/2*a;
    r2=-b-sqrt(d)/2*a;
    printf("The real roots are = %f %f",r1,r2);
}
else if(d==0) {
        r1=-b/2*a;
        r2=-b/2*a;


    printf("the roots are equal:%f %f",r1,r2);
}
else{
    printf("The roots are imaginary");
}
}
