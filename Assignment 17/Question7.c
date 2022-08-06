// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>

int main()
{
    
    char str;
    int i,count=0;
    printf("Enter the String: ");
    scanf("%c",&str);
    if('a'<=str && str<='z' || 'A'<=str && str<='Z')
        printf("Alphabets");
    else if('0'<=str && str<='9')
        printf("Digits");
    else
        printf("Special Characters");
    return 0;
}