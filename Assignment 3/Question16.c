// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include <stdio.h>

int main()
{
    char c;
    printf("Enter the Alphabet:");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
        printf("Uppercase");
    else if (c >= 'a' && c <= 'z')
        printf("Lowercase");
    else if (c >= '0' && c <= '9')
         printf("Digit");
    else
        printf("Special Character");

    return 0;
}