#include<stdio.h>
#include<string.h>
int main()
{char a[140],b[100];
    int count[256] = {0};
        char maxChar;    
    int maxCount = 0;


    

int i;
printf("Enter the character digit:");
gets(a);
for(i=0;a[i]!='\0';i++)
{
    count[a[i]]++;
   if (count[a[i]] > maxCount) {
            maxCount = count[a[i]];
            maxChar = a[i];
        }
}
     printf("The character '%c' appears the most (%d times).\n", maxChar, maxCount);
}