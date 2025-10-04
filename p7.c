#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch); // The space before %c is important to consume any leftover whitespace characters like newline.

    // Check if the character is a lowercase vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } 
    // Check if the character is an uppercase vowel
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
    // Check if the character is an alphabet (and therefore a consonant)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    }
    // If it's not an alphabet
    else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}