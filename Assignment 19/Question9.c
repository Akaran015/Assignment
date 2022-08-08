// Write a program that asks the user to enter a username.
// If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number.
// Otherwise, an error message is displayed.

#include <stdio.h>

#include <string.h>

int main()
{
    char str[5][20];
    char wd1[10];
    int i, j, count = 0, flag = 0, z;
    printf("Enter 5 String: ");
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }
    printf("Please Enter Your Name: ");
    gets(wd1);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(str[i], wd1) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        int n, i;
        unsigned long long fact = 1;
        printf("Enter an integer: ");
        scanf("%d", &n);
        if (n < 0)
            printf("Error! Factorial of a negative number doesn't exist.");
        else
        {
            for (i = 1; i <= n; ++i)
            {
                fact *= i;
            }
            printf("Factorial of %d = %llu", n, fact);
        }
    }
    else
        printf("You are Not Allowed to Calculate Factorial");
}