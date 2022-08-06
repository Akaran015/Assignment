// Write a program to reverse a string.

#include <stdio.h>

int main()
{

    char str[20], temp;
    int i, count = 0;
    printf("Enter the String: ");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
        count++;
    count--;
    for (i = 0; i < count / 2; i++)
    {
        temp = str[i];
        str[i] = str[count - i-1];
        str[count - i-1] = temp;
    }
    printf("Reverse String %s", str);
    return 0;
}