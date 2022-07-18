//  Write a program to check whether two given numbers are co-prime numbers or not.

#include <stdio.h>

int main()
{
    int num1, num2, hcf = 1;

    printf("Enter Two Number:");
    scanf("%d%d", &num1, &num2);

    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    if (hcf == 1)
    {
        printf("%d and %d are CO-PRIME NUMBERS.", num1, num2);
    }
    else
    {
        printf("%d and %d are NOT CO-PRIME NUMBERS.", num1, num2);
    }
    return 0;
}