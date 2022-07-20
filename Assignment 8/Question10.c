#include <stdio.h>

int main ()
{
	int i, j, x, row = 4, k;
	for (i = row; i >= 1; i--)
	{
		k = 1;
		x = 0;
		for (j = 1; j <= 7; j++)
		{
			if (j > i  && j < 8 - i)
				printf(" ");
			else
			{
				if (k <= i)
				{
					x++;
					printf ("%d", x);
					k++;
				}
				else
				{

					if (row == 4)
					{
						if (j == k)
						{
							--x;
						}
					}
					printf ("%d", x);
					--x;
				}
			}
		}
		printf ("\n");
	}
	return 0;
}