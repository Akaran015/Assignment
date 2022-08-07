// Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>

int main()
{
    char str[20];
    char c;
    int i,count=0;
    printf("Enter the String: ");
    fgets(str,20,stdin);
    printf("Enter the character: ");
    scanf("%c",&c);
    for (i = 0; str[i]; i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("The occurrence of a given character in a given string is: %d",count);
    return 0;
}