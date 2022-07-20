#include<stdio.h>
#include<stdlib.h>

int main()

{

	int a, b;
	int op;

	while (1)
	{
		printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit");
		printf("\n Enter your Choice : ");
		scanf("%d", &op);
		switch (op)
		{
		case 1 :
			printf("Enter the values of a & b: ");
			scanf("%d %d", &a, &b);
			printf("Sum of %d and %d is : %d\n\n", a, b, a + b);
			break;

		case 2 :
			printf("Enter the values of a & b: ");
			scanf("%d %d", &a, &b);
			printf("Difference of %d and %d is : %d\n\n", a, b, a - b);
			break;

		case 3 :
			printf("Enter the values of a & b: ");
			scanf("%d %d", &a, &b);
			printf("Multiplication of %d and %d is : %d\n\n", a, b, a * b);

			break;

		case 4 :
			printf("Enter the values of a & b: ");
			scanf("%d %d", &a, &b);
			printf("Division of Two Numbers is : %d\n\n", a / b);

			break;

		case 5 :
			exit(0);

		default :
			printf(" Enter Your Correct Choice.");
			break;

		}
	}

	return 0;

}