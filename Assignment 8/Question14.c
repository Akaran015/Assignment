#include<stdio.h>

int main()
{
	int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{

			if (i == 3)
			{
				if (j > 1 && j < 3)
					printf("  ");
				else
					printf("* ");
			}
			else if (i == 4)
			{
				if (j > 1 && j < 4)
					printf("  ");
				else
					printf("* ");
			}
			else
				printf("* ");
		}
		printf("\n");
	}
	return 0;
}