//Write a function to print first N prime numbers.
#include <stdio.h>
void Prime(int);

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);
    Prime(n);
    return 0;
}

void Prime(int n)
{
    int i, j, flag = 0,count=0;
    for (i = 2; i; i++)
    {
        if (n == count)
        {
            break;
        }
        
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            count++;
            printf("%d ", i);
        }

    }
}