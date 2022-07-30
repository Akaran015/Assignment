// Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>
int Greatest(int b[],int);
int main()
{
    int i, a[50], s, greatest;
    printf("Enter the Size of Array: ");
    scanf("%d", &s);
    printf("Enter the %d number: ", s);
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);

    greatest = Greatest(a,s);
    printf("The greatest number stored in an array of size %d is: %d ",s, greatest);
    return 0;
}

int Greatest(int b[],int s)
{
    int g,i;
    g = b[0];
    for (i = 1; i < s ; i++)
    {
        if (b[i] >= g)
            g = b[i];
    }
    return g;
}