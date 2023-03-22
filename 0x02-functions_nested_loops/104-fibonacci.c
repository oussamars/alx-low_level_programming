#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, carry = 0;
	unsigned int fib1 = 1, fib2 = 2, fib_sum;

	printf("%u, %u", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib_sum = fib1 + fib2 + carry;

		if (fib_sum > 999999999)
		{
			carry = 1;
			fib_sum = fib_sum % 1000000000;
		}
		else
			carry = 0;

		printf(", %u", fib_sum);

		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("\n");

	return (0);
}
