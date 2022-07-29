// Write a recursive function to print octal of a given decimal number.
#include <stdio.h>
void DtoO(int);
int main()
{
    int x;
    printf("Enter the Decimal Number: ");
    scanf("%d", &x);
    printf("octal of a given decimal number is:");
    DtoO(x);
    return 0;
}

void DtoO(int n)
{

    if (n >= 1)
    {
        DtoO(n / 8);
        printf("%d", n % 8);
    }
    else
        return;
}