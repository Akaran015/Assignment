// Write a function to calculate length of the string.

#include<stdio.h>
int Len(char *);
int main()
{
    char str[20];
    printf("Enter the String: ");
    gets(str);
    int x=Len(str);
    printf("The length of the string is: %d",x);
    return 0;
}

int Len(char str1[])
{
    int i,count=0;
    for (i = 0; str1[i]; i++)
        count++;
    return count;
    
}