// Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>

int main()
{
    char str[5][10];
    int i, j, count = 0;
    printf("Enter 5 String: ");
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    for (i = 0; i < 5; i++)
    {
        puts(str[i]);
    }
    return 0;
}