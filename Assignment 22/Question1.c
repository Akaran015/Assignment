// Define a function to input variable length string and store it in an array without memory wastage.

#include <stdio.h>
#include <stdlib.h>

void input();

int main()
{

    input();
    return 0;
}
void input()
{
    int x;
    printf("Enter Length of String: ");
    scanf("%d", &x);

    char *p = (char *)malloc(sizeof(char) * x);
    if (p == NULL)
    {
        printf("Memory Not Allocated Successfully!");
        exit(0);
    }
    else
    {
        printf("Memory Allocated Successfully!");
    }
}