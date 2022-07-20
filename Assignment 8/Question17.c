#include <stdio.h>

int main ()
{
	int i, j, k, row = 5;

	for (i = row; i >= 1; i--)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > row - i && j < row + i)
			{
				if (i == 2)
				{
					if (j > 4 && j < 6)
						printf(" ");
					else
						printf("*");
				}
				else if (i == 3)
				{
					if (j > 3 && j < 7)
						printf(" ");
					else
						printf("*");
				}
				else if (i == 4)
				{
					if (j > 2 && j < 8)
						printf(" ");
					else
						printf("*");
				}
				else
					printf("*");
			}
			else
			{
				printf (" ");
			}
		}
		printf ("\n");
	}
	return 0;
}