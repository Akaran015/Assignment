#include<stdio.h>

int main()
{

   int c, side1, side2, side3;


   while (1)
   {
      printf("Enter Your Choice:\n");
      printf("1.Isosceles Triangle \n2.Right Angled Triangle \n3.Equilateral Triangle \n4.Exit");
      printf("\nEnter Your Choice: ");
      scanf("%d", &c);

      switch (c)
      {
      case 1:
         printf("Enter sides of triangle:");
         scanf("%d%d%d", &side1, &side2, &side3);
         if (side1 == side2 || side2 == side3 || side3 == side1)
            printf("The given Triangle is isosceles\n\n");
         else
            printf("The given Triangle is Not isosceles\n\n");
         break;

      case 2:
         printf("Enter sides of triangle:");
         scanf("%d%d%d", &side1, &side2, &side3);
         if ((side1 * side1) + (side2 * side2) == (side3 * side3) || (side1 * side1) + (side3 * side3) == (side2 * side2) || (side2 * side2) + (side3 * side3) == (side1 * side1))
            printf("The Given Triangle is right angled triangle\n\n");
         else
            printf("The Given Triangle is Not right angled triangle\n\n");
         break;

      case 3:
         printf("Enter sides of triangle:");
         scanf("%d%d%d", &side1, &side2, &side3);
         if (side1 == side2 && side2 == side3)
            printf("The Given Triangle is equilateral\n\n");
         else
            printf("The Given Triangle is Not equilateral\n\n");
         break;
      
      case 4:
         exit(0);

      default:
         printf("Wrong Input");

      }
   }
   return 0;
}