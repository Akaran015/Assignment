// Write a function in C to count the frequency of each element of an array.

#include <stdio.h>

int main()
{
    int arr[20],i,size;

    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    printf("Enter the %d number: ",size);
    for (i = 0; i <size; i++)
        scanf("%d", &arr[i]);

    int length =size;
    int fr[length];
    int visited = -1;

    for (int i = 0; i < length; i++)
    {
        int count = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                fr[j] = visited;
            }
        }
        if (fr[i] != visited)
            fr[i] = count;
    }
    for (int i = 0; i < length; i++)
    {
        if (fr[i] != visited)
        {
            printf("    %d=> %d\n", arr[i], fr[i]);
        }
    }
    return 0;
}