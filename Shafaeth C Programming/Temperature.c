#include<stdio.h>
int main()
{
    int choice;
    float temperature, convert_1, convert_2;
printf("1. Celsius to Fahrenheit and Kelvin\n");
printf("2. Fahrenheit to Celsius and Kelvin\n");
printf("3. Kelvin to Celsius and Fahrenheit\n");
printf("Enter Your Choice(1 to 3):");
scanf("%d", &choice);
switch(choice)
{
case 1:
    printf("Enter temperature in Celsius:");
    scanf("%f", &temperature);
    convert_1=(temperature * 9/5) + 32 ;
    printf("temperature in Farhenheit:%f\n", convert_1);
     convert_2=temperature + 273.15 ;
         printf("temperature in Kelvin:%f\n", convert_2);

         break;
         case 2:
    printf("Enter temperature in Farhenheit:");
    scanf("%f", &temperature);
    convert_1=(temperature- 32) * 5/9;
    printf("temperature in Celsius:%f\n", convert_1);
     convert_2=(temperature - 32) * 5/9 + 273.15 ;
         printf("temperature in Kelvin:%f\n", convert_2);
    break;

         case 3:
    printf("Enter temperature in Kelvin:");
    scanf("%f", &temperature);
    convert_1=(temperature- 273.15)  ;
    printf("temperature in Celsius:%f\n", convert_1);
     convert_2=(temperature - 273.15) * 9/5 + 32 ;
         printf("temperature in Farhenheit:%f\n", convert_2);

break;

         default:
            printf("Invalid!");


            }

}
