// Write a program in C to copy the elements of one array into another array.Take array values from the user.

#include <stdio.h>
void Reverse(int);
int main()
{
    int i, a[20], b[20], s;
    printf("Enter the Size of Array: ");
    scanf("%d", &s);

    printf("Enter the %d number in Array: ", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < s; i++)
    {
        b[i] = a[i];
    }
    printf("copy the elements of array A into  array B value inside array B: ");
    for (i = 0; i < s; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}