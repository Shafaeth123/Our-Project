#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int i,l;
     
    
    printf("Input the string: ");
    fgets(str, sizeof(str), stdin); 
    
   
    
     i = 0; 
    int wrd = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            wrd++; 
        }

        i++; 
    }
    printf("Total number of words in the string is:%d",wrd);
    return 0;
}
