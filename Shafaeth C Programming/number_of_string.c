#include<stdio.h>
int main()
{char a[140];
int i=0,alp=0,digit=0,splch=0;
printf("Enter the character digit:");
gets(a);
puts(a);
 while (a[i] != '\0') {
if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            alp++;
        } else if (a[i] >= '0' && a[i] <= '9') {
            digit++; 
        } else {
            splch++;
        }
        i++;
}
 printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
	
}