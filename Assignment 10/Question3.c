#include<stdio.h>

int Check(int);

int main() {
   float num, flag;

   printf("\nEnter The Number : ");
   scanf("%f", &num);

   flag = Check(num);

   if (flag == 1)
      printf("\nEven");
   else
      printf("\nOdd");

   return 0;
}

int Check(int x)
{
   return x % 2 == 0;
}
