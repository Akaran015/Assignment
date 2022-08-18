// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include <stdio.h>
void sort(int *, int);

int main()
{
    int i;
    int a[10] = {30, 10, 20,54,23,12};
    int *p = &a[0];

    sort(p, 6);

    for(i=0;i<6;i++)
        printf("%d",a[i]);
    return 0;
}

void sort(int *ptr, int size)
{

    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(ptr + i)>= *(ptr + j))
            {

                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}