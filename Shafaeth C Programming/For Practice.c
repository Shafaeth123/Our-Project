#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int count1 = 0, count2 = 0, count3 = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1')
        {
            count1++;
        }
        else if(s[i] == '2')
        {
         count2++;
        }
        else if (s[i] == '3'){

        count3++;}
    }

    for (int i = 0; i < count1; i++) {
        if (i > 0)
        {
            printf("+");}
        printf("1");
    }
    for (int i = 0; i < count2; i++) {
        if (i > 0 || count1 > 0)
        {
            printf("+");}
        printf("2");
    }
    for (int i = 0; i < count3; i++) {
        if (i > 0 || count1 > 0 || count2 > 0)
        {
            printf("+");}
        printf("3");

    }

    printf("\n");
    return 0;
}
