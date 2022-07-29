// Write a recursive function to print binary of a given decimal number.

#include <stdio.h>
void Reverse(int);
int main()
{
    int x;
    printf("Enter the Decimal Number: ");
    scanf("%d", &x);
    printf("\nReverse of Given number is: ");
    Reverse(x);
    return 0;
}

void Reverse(int n)
{
    if (n)
    {
        printf("%d", n % 10);
        Reverse(n / 10);
    }
    else
        return;
}