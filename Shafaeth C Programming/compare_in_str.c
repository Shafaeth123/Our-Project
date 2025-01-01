#include<stdio.h>
#include<string.h>

int main()
{char s1[140],s2[100];
int word=1,i;
printf("Input the 1st string :");
gets(s1);
puts(s1);
printf("Input the 2nd string :");
gets(s2);
puts(s2);
if (strcmp(s1, s2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

 
}