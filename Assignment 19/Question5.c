// Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.

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
        flag=0;
        for (j = 0; str[i][j] != '\0'; j++)
        {
            if (str[i][j] == '@')
                flag = 1;
        }
        if (flag == 0)
        {
            printf("%s ", str[i]);
        }
    }

    return 0;
}