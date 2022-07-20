#include<stdio.h>

int main()
{
	int i, j, k;
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= 5; j++)
		{
			if (j >= i)
			{
				if (i == 2)
				{
					if (j > 2 && j < 5)
						printf("  ");
					else
						printf("* ");
				}
				else if (i == 3)
				{
					if (j > 3 && j < 5)
						printf("  ");
					else
						printf("* ");
				}
				else
					printf("* ");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}
