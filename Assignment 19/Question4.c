// Write a program to search a string in the list of strings.

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
    char ser[10];
    printf("Enter the String Which you want to Search: ");
    gets(ser);
    int x = strlen(ser);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; str[i][j] != '\0'; j++)
        {
            if (ser[j] == str[i][j])
            {
                for (z = j; z < x; z++)
                {
                    if (ser[z] != str[i][z])
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 1)
            printf("Not Found");
        else
            printf("Found");

        return 0;
    }
}