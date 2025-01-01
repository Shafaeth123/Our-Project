#include<stdio.h>
#include<string.h>
int main()
{char a[140],b[100];
printf("Enter the character digit:");
gets(a);
 strcpy(b, a);

    printf("The First string is: %s\n", a);
    printf("The Second string is: %s\n", b);
    printf("Number of characters copied: %lu\n", strlen(b));
}