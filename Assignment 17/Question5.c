// Write a program to convert a given string into lowercase

#include <stdio.h>

int main()
{

    char str[20];
    int i, count = 0;
    printf("Enter the String: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i]; i++)
        str[i] += 32;
    printf("String into lowercase %s", str);
    return 0;
}