// Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include <string.h>

int main()
{

    char *a = "Mohitks";
    int i, j;
    for (i = 0; *(a + i); i++)
        ;
    int x = i;

    for (j = x; j >= 0; j--)
        printf("%c",*(a+j));
        
    return 0;
}