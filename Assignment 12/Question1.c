#include<stdio.h>  
void display(int);  
int main()  
{  
    int x;  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &x);  
    printf("\nNatural Numbers from 1 To %d are:", x);  
    display(x);  
    return 0;  
}  
  
void display(int n)  
{  
    if(n)  
        display(n-1);  
    else  
        return;  
    printf("%d ", n);  
}