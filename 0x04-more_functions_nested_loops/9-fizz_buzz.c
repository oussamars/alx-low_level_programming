#include <stdio.h>

/**
 * main - print the fizz buzz and nums
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("fizzbuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
