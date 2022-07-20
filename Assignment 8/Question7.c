#include <stdio.h>

int main ()
{
	int i, j, k, row = 5;

	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j > row + 1 - i && j < row + i)
			{
				printf (" ");
			}
			else
			{
				printf ("*");
			}
		}
		printf ("\n");
	}
	return 0;
}