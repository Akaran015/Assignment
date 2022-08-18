// Write a program to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
#include <string.h>

int main()
{
    char *a= "I";
    if(*(a+0)=='a'||*(a+0)=='e'||*(a+0)=='i'||*(a+0)=='o'||*(a+0)=='u'||*(a+0)=='A'||*(a+0)=='E'||*(a+0)=='I'||*(a+0)=='O'||*(a+0)=='U')
        printf("Vowels");
    else
        printf("Consonants");
    return 0;
}