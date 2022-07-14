// Write a program to check whether a given alphabet is in uppercase or lowercase
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
    else
        printf("Wrong input");

    return 0;
}