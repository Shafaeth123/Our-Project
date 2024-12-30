#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int i=0;
     
    
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin); 
    
    
    printf("\nThe string you entered is:");
     while (str[i] != '\0' && str[i] != '\n') {
        printf("%c  ", str[i]); // Print each character followed by two spaces
        i++;
     }
    return 0;
}
