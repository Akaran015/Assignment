#include <stdio.h>

int main ()
{
	int i, j, x, row = 4, k;

	for (i = row; i >= 1; i--)
	{
		k = 1;
		x = 64;
		for (j = 1; j <= 7; j++)
		{

			if (j > row - i && j < row + i)
			{


				if (k <= i)
				{
					x++;
					printf ("%c", x);

					k++;
				}
				else
				{
					--x;
					printf ("%c", x);

				}


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