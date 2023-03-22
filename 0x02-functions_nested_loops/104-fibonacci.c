#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, j, k;
	unsigned long int n, i1, j1, i2, j2;

	i = 0;
	j = 1;
	n = 98;

	for (k = 1; k <= n; k++)
	{
		if (k == 1)
		{
			printf("%lu", j);
		}
		else
		{
			printf(", ");
			i1 = i;
			j1 = j;
			for (i2 = i1 + (j1 / 10000000000); i2 > i1; i2--)
			{
				j2 = j1 % 10000000000;
				j1 /= 10;
				if (j2 > j1)
				{
					i1++;
				}
			}
			i = j1;
			j = j1 + i;
			printf("%lu", j);
		}
	}

	printf("\n");
	return (0);
}
