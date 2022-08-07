// Write a function to transform a string into lowercase.

#include<stdio.h>

int Lower(char *);
int main()
{
    char str[20];
    printf("Enter the String: ");
    gets(str);
    Lower(str);
    printf("String to Lowercase %s", str);
    return 0;
}

int Lower(char str1[])
{
    int i, count = 0;
    for (i = 0; str1[i]; i++)
    {
        if ('A'<=str1[i] && str1[i]<='Z')
            str1[i] += 32;
    }
    
}