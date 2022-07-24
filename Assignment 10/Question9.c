#include <stdio.h>

int Check(int,int);

int main()
{
    int n,d,f;

    printf("Enter any number: ");
    scanf("%d", &n);
    
    printf("Enter the Digit: ");
    scanf("%d", &d);

    f = Check(n,d);

    if(f==1)
        printf("Digit is present in Number");
    else
        printf("Digit is not present in Number");
    return 0;
}

int Check(int n,int d)
{
    int temp;
    
    while(n>0)
    {
        temp=n%10;
        if(d==temp)
            return 1;
        else
            n/=10;
    }
    return 0;
}
