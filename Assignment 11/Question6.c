//Write a function to print all Prime numbers between two given numbers.
#include <stdio.h>
void Prime(int, int);

int main()
{
    int n1, n2;
    printf("Enter First Number: ");
    scanf("%d", &n1);
    printf("Enter Second Number: ");
    scanf("%d", &n2);
    Prime(n1, n2);
    return 0;
}

void Prime(int n1, int n2)
{
    int i, j, flag = 0, count = 0;
    for (i = n1; i<=n2; i++)
    {

        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                flag = 1;
        }
        if (flag == 0)
        {

            printf("%d ", i);
        }
    }
}