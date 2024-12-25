#include<stdio.h>
int main()
{
int marks,x;
printf("Enter your marks:");
scanf("%d",&marks);
x=marks/10;
switch(x){
case 10:
case 9:
case 8:
    printf("Very good");
    break;
    case 7:
    printf("Good");
    break;
    case 6:
    printf("Average");
    break;
    case 5:
    printf("below Average");
    break;
    case 4:
    printf("Need improvement");
    break;
    default:
        printf("Retake");
 break;
}


}
