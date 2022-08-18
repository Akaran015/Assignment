// Write a program to calculate the length of the string using a pointer

#include <stdio.h>
#include <string.h>

int main()
{
    char *a= "Mohitks";
    int i;
    for(i=0;*(a+i);i++);

    printf("Length of String is %d",i);
    return 0;
}