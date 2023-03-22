#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The character to be treated
 * Return: Always the value of last
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
