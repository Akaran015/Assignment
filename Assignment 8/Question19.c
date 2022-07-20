#include<stdio.h>
int main() {
   int a, b, line = 12;
   for (a = line / 2; a <= line; a = a + 2) {
      if (a == line)
      {
         for (b = 1; b < line - a; b = b + 2)
            printf(" ");
         for (b = 1; b <= a; b++)
         {
            if (b == 10)
               printf("MYSIRG");
            else
               printf("*");
         }
         for (b = 1; b <= line - a; b++)
            printf(" ");
         for (b = 1; b <= a - 1; b++) {
            if (b >= 7)
               printf(" ");
            else
               printf("*");
         }
         printf("\n");
      }
      else
      {
         for (b = 1; b < line - a; b = b + 2)
            printf(" ");
         for (b = 1; b <= a; b++)
            printf("*");
         for (b = 1; b <= line - a; b++)
            printf(" ");
         for (b = 1; b <= a - 1; b++)
            printf("*");
         printf("\n");
      }
   }
   for (a = line; a >= 0; a--) {
      for (b = a; b < line; b++)
         printf(" ");
      for (b = 1; b <= ((a * 2) - 1); b++)
         printf("*");
      printf("\n");
   }
}