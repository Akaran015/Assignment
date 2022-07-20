#include <stdio.h>

int main ()
{
	int i, j, x, row = 7, k;
	for (i = row; i >= 1; i--)
	{
		k = 1;
		x = 64;
		for (j = 1; j <= 13; j++)
		{
			if (j > i  && j < 14 - i)
				printf(" ");
			else
			{
				if (k <= i)
				{
					x++;
					printf ("%c", x);
					k++;
				}
				else
				{

					if (row == 7)
					{
						if (j == k)
						{
							--x;
						}
					}
					printf ("%c", x);
					--x;
				}
			}
		}
		printf ("\n");
	}
	return 0;
}