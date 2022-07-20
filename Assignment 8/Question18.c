#include <stdio.h>

int main ()
{
	int i, j, k, x = 5, y = 5, row = 9;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > x - i && j < x + i)
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
	for (i = y; i >= 1; i--)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > y-i+1 && j < y + i-1)
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


