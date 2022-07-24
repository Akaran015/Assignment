#include<stdio.h>
#define Pi 3.14

float Area(float);

int main() {
   float radius,area;

   printf("\nEnter the radius of Circle : ");
   scanf("%f", &radius);
   
   area=Area(radius);

   printf("\nArea of Circle : %.2f", area);

   return (0);
}

float Area(float r)
{
	float a;
   a = 3.14 * r * r;
   return a;
}