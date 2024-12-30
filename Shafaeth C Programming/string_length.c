#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int length=0,i; 
    
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin); 
     //while (str[length] != '\0' && str[length] != '\n') 
    for(i=0;i<str[length];i++)
    {
        length++;
    }
    printf("\nThe string you entered is: %d", length-1);
    return 0;
}
