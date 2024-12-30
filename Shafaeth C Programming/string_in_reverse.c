#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int i,l;
     
    
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin); 
    
    l=strlen(str);
    printf("\nThe string you entered is:");
     for (i=l;i>=0;i--) {
        printf("%c  ", str[i]); // Print each character followed by two spaces
    
     }
    return 0;
}
