#include "main.h"

/**
 * print_most_numbers - prints the numbers form 0 to 9 without 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
