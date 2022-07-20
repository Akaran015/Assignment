#include<stdio.h>

int main()
{
	int number, choice;
	printf("Enter a Even Number: ");
	scanf("%d",&number);
	switch (number % 2 == 0)
	{
	case 1:
		printf("Rounded off to nearest upper odd is : %d",number + 1);
		break;
	default:
		printf("Please Enter Even Number");
	}
}