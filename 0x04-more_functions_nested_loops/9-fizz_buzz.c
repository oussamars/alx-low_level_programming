#include <stdio.h>

/**
 * main - print the fizz buzz and nums
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("buzz ");
		}
		else if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("fizzbuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
