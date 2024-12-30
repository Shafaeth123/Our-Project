#include <stdio.h>
#include <string.h>


int main() {
    char str[100];

    
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin); 
    printf("\nThe string you entered is: %s", str);
    return 0;
}
