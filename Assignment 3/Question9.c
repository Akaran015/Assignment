//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Three Number:");
    scanf("%d%d%d",&a,&b,&c);
    printf("Greatest %d", a>b? a>c?a:c:b>c?b:c);
    return 0;
}