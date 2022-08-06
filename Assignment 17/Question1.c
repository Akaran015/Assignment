// Write a program to calculate the length of the string. (without using built-in method)

#include<stdio.h>

int main()
{
    
    char str[20];
    int i,count=0;
    printf("Enter the String: ");
    fgets(str,20,stdin);
    for (i = 0; str[i]; i++)
        count++;
    
    printf("The length of the string is: %d",count-1);
    return 0;
}