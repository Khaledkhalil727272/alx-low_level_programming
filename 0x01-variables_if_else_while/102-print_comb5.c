#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if ((j == 8) && (i == 9))
				continue;
			putchar(' ');
			for (k = 0; k <= 9; k++)
			{
				for (m = k; m <= 9; m++)
				{
					if (m == k)
						continue;
					putchar((k % 10) + '0');
					putchar((m % 10) + '0');
					if ((j == 8) && (i == 9))
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
