// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include <stdio.h>

int main()
{
    char alph;
    printf("Enter the Alphabet:");
    scanf("%c", &alph);
    int x = alph;
    if (x >= 65 && x <= 90)
        printf("Uppercase");
    else if (x >= 97 && x <= 122)
        printf("Lowercase");
    else if (x >= 48 && x <= 57)
         printf("Digit");
    else
        printf("Special Character");

    return 0;
}