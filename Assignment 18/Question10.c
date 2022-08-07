// Write a function to find the repeated character in a given string.

#include<stdio.h>
#include<string.h>

void Fre(char *);
int main()
{
    char str[20];
    printf("Enter the String: ");
    gets(str);
    Fre(str);
    return 0;
}

void Fre(char str1[])
{
    int i, j, count = 0;
    int len=strlen(str1);

    for (i = 0; i<len; i++)
    {
        count=1;
        for (j = i+1; j<len; j++)
        {
            if (str1[i] == str1[j])
            {    count++;
                str1[j]=0;
            }
        }
        if(str1[i]!=0)
            if(count>1)
                printf("The repeated character in a given string is  %c\n",str1[i]);
    }
    
}