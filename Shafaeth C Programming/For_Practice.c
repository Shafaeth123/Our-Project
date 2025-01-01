#include<stdio.h>
#include<string.h>
int main()
{char a[140];
     int length = strlen(a);    // Find the length of the string
    char temp;                   // Temporary variable for swapping
 printf("Enter the character:");
 gets(a);
    // Sorting the string in ascending order
    for (int i = 0; i < length - 1; i++) {   // Outer loop to go through each character
        for (int j = i + 1; j < length; j++) {  // Inner loop to compare characters
            if (a[i] > a[j]) {  // If the current character is greater than the next
                // Swap characters if they are in the wrong order
                temp = a[i];       // Store the current character in temp
                a[i] = a[j];     // Replace the current character with the next character
                a[j] = temp;       // Place the stored character in the next position
            }
        }
    }

    // Output the sorted string
    printf("After sorting the string appears like: \n%s", a);

}