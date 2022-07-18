// Write a program to print all Armstrong numbers under 1000.

#include <stdio.h>

int main()
{
    int x=1,y,z,new=0,temp;
    printf("all Armstrong numbers under 1000: ");
    while ( x<= 1000)
    {
        y = x;
        z=x;

        while (y>0)
        {
        
        temp = y % 10;
        new += (temp * temp * temp);
        y /= 10;
        }

        if (new == z)
           printf("%d ",x);
        new=0;
        x++;
    }

    return 0;
}