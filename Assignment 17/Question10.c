//  Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i, j, count = 0;
    printf("Enter the String: ");
    gets(str);
    int len=strlen(str);

    for (i = 0; i<len; i++)
    {
        count=1;
        for (j = i+1; j<len; j++)
        {
            if (str[i] == str[j])
            {    count++;
                str[j]=0;
            }
        }
        if(str[i]!=0)
            printf("Frequency of Characters %c is %d\n",str[i],count);
    }

    return 0;
}