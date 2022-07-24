#include<stdio.h>

float SI(float, float, float);

int main() {
   float p, r, t, amount;

   printf("\nEnter initial principal balance : ");
   scanf("%f", &p);

   printf("\nEnter annual interest rate : ");
   scanf("%f", &r);

   printf("\nEnter time (in years) : ");
   scanf("%f", &t);

   amount = SI(p, r, t);

   printf("\nSimple Interest : %.2f", amount);

   return (0);
}

float SI(float p, float r, float t)
{
   float a;
   a = p * (1 + r * t);
   return a;
}
