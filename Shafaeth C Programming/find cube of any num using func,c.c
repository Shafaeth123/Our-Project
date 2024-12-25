#include<stdio.h>
float cube(float num);
int main()
{
    float num,c;
    printf("Enter num: ");
    scanf("%f",&num);
    c=cube(num);
printf("Cube of %.2f is %.2f", num, c);
    return 0;

}
float cube(float num)
{
    return (num*num*num);
}
