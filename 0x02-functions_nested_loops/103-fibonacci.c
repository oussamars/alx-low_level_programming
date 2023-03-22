#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci numbers
 * less that 4000000.
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
			j = k;
			k = next;
		}
		printf("%lu\n", sum);
		return (0);
	}
}
