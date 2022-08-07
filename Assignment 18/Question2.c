// Write a function to reverse a string.

#include<stdio.h>
void Rev(char *);
int main()
{
    char str[20];
    printf("Enter the String: ");
    gets(str);
    Rev(str);
    printf("Reverse String %s", str);
    return 0;
}

void Rev(char str1[])
{
    int i, count = 0;
    char temp;
    for (i = 0; str1[i]; i++)
        count++;
    for (i = 0; i < count / 2; i++)
    {
        temp = str1[i];
        str1[i] = str1[count - i-1];
        str1[count - i-1] = temp;
    }
    
}