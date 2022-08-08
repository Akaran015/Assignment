// Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} word1 = “the”, word2 = “fox”, OUTPUT : 1 )

#include <stdio.h>

#include <string.h>
int main()
{
    char str[5][20];
    char wd1[10];
    char wd2[10];
    int i,flag=0;
    int w1 = 0, w2 = 0;
    printf("Enter 5 String: ");
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }

    printf("Word1 : ");
    gets(wd1);

    printf("Word2 : ");
    gets(wd2);

    for (i = 0; i < 5; i++)
    {
        // int x = strlen(str[i]);
        // flag = 0;

        if (strcmp(str[i], wd1)==0)
        {
            w1 = i;
        }
        if (strcmp(str[i], wd2)==0)
        {
            w2 = i;
        }

    }

    if (w1 < w2)
        printf("The minimum distance between the given two words: %d", w2 - w1);
    else
        printf("The minimum distance between the given two words: %d", w1 - w2);

    return 0;
}