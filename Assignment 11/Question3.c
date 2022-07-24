#include <stdio.h>

int Prime(int);

int main() {
    int n1, p;
    printf("Enter the Number: ");
    scanf("%d", &n1);

    p = Prime(n1);

    if (p == 1)
        printf("Number is Prime");
    else
        printf("Number is Not Prime");

}

int Prime(int n1)
{
    int i, flag = 0;
    for (i = 2; i <= n1 / 2; i++)
    {
        if (n1 % 2 == 0)
            flag = 1;
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}