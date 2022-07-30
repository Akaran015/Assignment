// Write a function in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
void Reverse(int);
int main()
{
    int i,a[100],s;
    printf("Enter the Size of Array: ");
    scanf("%d",&s);

    printf("Enter the %d number in Array: ",s);
    for ( i = 0; i < s; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d number of values in reverse order\n",s);
    for ( i = 0; i < s; i++)
    {
        Reverse(a[i]);
    }    

    return 0;
}

void Reverse(int x){
    int temp;
    while (x>0)
    {
        temp=x%10;
        printf("%d",temp);
        x/=10;
    }
    printf(" ");
    return;
    
}