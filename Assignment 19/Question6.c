// Write a program to print the strings which are palindrome in the list of strings.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][10];
    int i, j, count = 0, flag = 0, z;
    printf("Enter 5 String: ");
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    for (i = 0; i < 5; i++)
    {
        int x = strlen(str[i]);
        flag = 0;
        for (j = 0; j < x / 2; j++)
        {
            if (str[i][j] != str[i][x - j - 1])
                flag = 1;
        }

        if (flag == 0)
            printf("%s ", str[i]);
    }

    return 0;
}