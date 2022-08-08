// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

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
        for (j = 0; str[i][j] != '\0'; j++)
        {
            if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' || str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U')
                count++;
        }
    }
    printf("Total vowels in each of the 5 strings stored in two dimensional arrays is %d", count);

    return 0;
}