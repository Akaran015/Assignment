// Write a function to transform string into uppercase.

#include<stdio.h>

int Upper(char *);
int main()
{
    char str[20];
    printf("Enter the String: ");
    gets(str);
    Upper(str);
    printf("String to Uppercase %s", str);
    return 0;
}

int Upper(char str1[])
{
    int i, count = 0;
    for (i = 0; str1[i]; i++)
    {
        if ('a'<=str1[i] && str1[i]<='z')
            str1[i] -= 32;
    }
    
}