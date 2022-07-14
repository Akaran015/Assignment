#include <math.h> 
#include <stdio.h> 
  
int mask=1;

int main() 
{ 
    int num,count=1;
    printf("Enter the Number:");
    scanf("%d",&num); 
    while(num)
    {
        if(mask&num)
            break;
        num>>=1;
        count+=1;
    }
    printf("The position of first 1 in LSB is %d",count);
    return 0; 
} 