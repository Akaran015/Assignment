//Write a recursive function to print first N odd natural numbers.

#include<stdio.h>  
void display(int);  
int main()  
{  
    int x;  
    printf("Enter the number of terms to be printed: ");  
    scanf("%d", &x);  
    printf("\nFirst %d odd natural numbers are:", x);  
    display(x);  
    return 0;  
}  
  
void display(int n)  
{  
    
    if(n)
        display(n-1);
    else  
        return;
    printf("%d ", 2*n-1);
      
}