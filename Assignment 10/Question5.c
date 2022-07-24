#include <stdio.h>

void Print(int);

int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);
    Print(n);

    return 0;
}

void Print(int x)
{
    int i;

    printf("First %d odd numbers: \n", x);
    for (i = 1; i <= x; i++)
    {
        printf("%d ", 2*i-1);
    }
}
