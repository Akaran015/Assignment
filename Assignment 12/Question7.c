//Write a recursive function to print squares of first N natural numbers.

#include<stdio.h>  
void display(int);  
int main()  
{  
    int x;  
    printf("Enter the number of terms to be printed: ");  
    scanf("%d", &x);  
    printf("\nSquares of first %d natural numbers are:",x);  
    display(x);  
    return 0;  
}  
  
void display(int n)  
{  
    
    if(n)
        display(n-1);
    else  
        return;
    printf("%d ", n*n);
      
}