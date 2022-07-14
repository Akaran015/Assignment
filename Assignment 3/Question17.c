// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include <stdio.h>
#include <stdbool.h>

bool check(int a, int b, int c)
{
	if (a + b <= c || a + c <= b || b + c <= a)
		return false;
	return true;
}

int main()
{
	int a,b,c;
    printf("Enter Three Sides:");
    scanf("%d%d%d",&a,&b,&c);
	if (check(a, b, c))
		printf("Valid");
	else
		printf("Invalid");
}
