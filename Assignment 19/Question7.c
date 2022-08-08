// From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][20];
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
        if (str[i][3]=='.' && str[i][7]=='.' && str[i][10]=='.')
                flag = 1;

        if (flag == 1)  
            printf("%s is Valid\n", str[i]);
    }

    return 0;
}