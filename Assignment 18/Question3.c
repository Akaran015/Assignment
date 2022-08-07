// Write a function to compare two strings.

#include <stdio.h>

#include <string.h>

int Comp(char *, char *);
int main()
{
    char str1[20], str2[20];
    printf("Enter the String1: ");
    gets(str1);
    printf("Enter the String2: ");
    gets(str2);
    int x = Comp(str1, str2);
    if (x == 1)
        printf("Strings are Equal");
    else
        printf("Strings are UnEqual");
    return 0;
}

int Comp(char str1[], char str2[])
{
    int x = strlen(str1);
    int y = strlen(str2);
    int i;
    if (x == y)
    {
        for (i = 0; i < x; i++)
        {
            if(str1[i]!=str2[i])
                return 0;
        }
        return 1;
    }
    else
        return 0;
}