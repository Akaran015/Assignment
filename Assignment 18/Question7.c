// Write a function to check whether a given string is palindrome or not.

#include<stdio.h>

#include<string.h>

int Palindrome(char *);
int main()
{
    char str[20];
    printf("Enter the String: ");
    gets(str);
    int x=Palindrome(str);
    if (x == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}

int Palindrome(char str1[])
{
    int x=strlen(str1);

    int i,count=0;
    for (i = 0; i<x/2; i++)
    {
        if(str1[i]!=str1[x-i-1])
            return 0;
    }
    return 1;
    
}