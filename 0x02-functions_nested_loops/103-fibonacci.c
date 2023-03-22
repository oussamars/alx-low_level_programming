#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of the even-valued terms in the
 * Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 1, second = 2, next, sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;

		next = first + second;
		first = second;
		second = next;
	}

	printf("%d\n", sum);

	return (0);
}

