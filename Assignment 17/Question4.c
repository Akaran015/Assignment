// Write a program to convert a given string into uppercase.

#include <stdio.h>

int main()
{

    char str[20];
    int i, count = 0;
    printf("Enter the String: ");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
    {
        if ('a'<=str[i] && str[i]<='z')
            str[i] -= 32;
    }
    printf("String into uppercase %s", str);
    return 0;
}