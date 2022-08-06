// Write a program in C to copy one string to another string.

#include<stdio.h>

int main()
{
    char str1[20],str2[20];
    int i,count=0;
    printf("Enter the String: ");
    fgets(str1,20,stdin);
    for (i = 0; str1[i]; i++)
        str2[i]=str1[i];
    
    printf("String :%s",str2);
    return 0;
}