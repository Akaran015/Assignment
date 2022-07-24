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

    printf("Natural numbers from 1 to %d : \n", x);
    for (i = 1; i <= x; i++)
    {
        printf("%d\n", i);
    }
}
