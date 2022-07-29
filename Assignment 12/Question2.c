#include<stdio.h>  
void display(int);  
int main()  
{  
    int x;  
    printf("Enter the number of terms to be printed: ");  
    scanf("%d", &x);  
    printf("\nNatural Numbers from  %d to 1 are:", x);  
    display(x);  
    return 0;  
}  
  
void display(int n)  
{  
    
    if(n)
    {
        printf("%d ", n);  
        display(n-1);
    }  
    else  
        return;  
      
}