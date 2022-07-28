//Write a function to find the next prime number of a given number.
#include <stdio.h>

int Prime(int);

int main() {
    int n1, p;
    printf("Enter the Number: ");
    scanf("%d", &n1);

    p = Prime(n1);

    printf("The Next Prime Number is : %d", p);
}

int Prime(int n1)
{
    int i, p, flag;
    for (p = n1 + 1; 1; p++)
    {
        flag = 0;
        for (i = 2; i <= p / 2; i++)
        {
            if (p % i == 0)
                flag = 1;

        }
        if (flag == 0)
        {
            return p;
        }
    }

}