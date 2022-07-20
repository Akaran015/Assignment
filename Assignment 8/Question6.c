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
				printf ("*");
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