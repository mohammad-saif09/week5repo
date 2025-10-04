#include <stdio.h>

int main() {
    char character; 

    printf("Enter a character: ");
    
    scanf("%c", &character);

    // Print the character and its corresponding ASCII value
    // When a character variable is printed using the %d format specifier,
    // its integer (ASCII) value is displayed.
    printf("The ASCII value of '%c' is %d\n", character, character);

    return 0; 
}