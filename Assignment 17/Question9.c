// Write a C program to sort a string array in ascending order.

#include <stdio.h>

int main()
{
    char str[20], temp;
    int i, j, count = 0;
    printf("Enter the String: ");
    fgets(str, 20, stdin);

    for (i = 0; str[i]; i++)
    {
        for (j = 0; str[j]; j++)
        {
            if (str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("String :%s", str);
    return 0;
}