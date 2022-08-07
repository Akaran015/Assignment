// Write a function to reverse a string word wise.
//(For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )

#include <stdio.h>
#include <string.h>
void Reverse(char *);
int main()
{
    int i;
    char str1[50], str2[50];
    printf("Enter the String: ");
    gets(str1);
    int x = strlen(str1);
    str2[0] = ' ';
    for (i = 1; i <= x + 1; i++)
    {
        str2[i] = str1[i - 1];
    }
    Reverse(str2);
    return 0;
}

void Reverse(char str1[])
{
    int a[20];
    int x = strlen(str1);

    int i, j, z, count = 0;
    for (i = x - 1; i >= 0; i--)
    {
        if (str1[i] == ' ')
        {
            for (j = i + 1; str1[j] != '\0'; j++)
            {
                if (str1[j] == ' ')
                    break;
                else
                    printf("%c", str1[j]);
            }
            printf(" ");
        }
    }
}
