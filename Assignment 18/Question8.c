// Write a function to count words in a given string.


#include<stdio.h>
int Word(char *);
int main()
{
    char str[20];
    printf("Enter the String: ");
    gets(str);
    int x=Word(str);
    printf("The Total Words in string is: %d",x);
    return 0;
}

int Word(char str1[])
{
    int i,count=0;
    for (i = 0; str1[i]; i++)
        if(str1[i]==' ')
            count++;
    return ++count;
    
}