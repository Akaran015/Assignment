// Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit).

#include<stdio.h>
void Check(char);
int main()
{
    char str;
    printf("Enter the String: ");
    scanf("%c",&str);
    Check(str);
    return 0;
}

void Check(char str)
{
    if('a'<=str && str<='z' || 'A'<=str && str<='Z')
        printf("Alphabets");
    else if('0'<=str && str<='9')
        printf("Digits");
    else
        printf("Special Characters");
    
}