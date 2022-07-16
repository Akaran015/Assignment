// Write a program to calculate LCM of two numbers.

#include<stdio.h>

int main()
{
    int x,y,L;
    printf("Enter Two number:");
    scanf("%d%d",&x,&y);

    for(L=x>y?x:y ; L<=x*y ; L+=(x>y?x:y))
        if(L%x==0 && L%y==0)
            break;
    
    printf("LCM is %d",L);
    return 0;
}