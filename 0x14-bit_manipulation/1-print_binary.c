#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: is an unsigned integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int d = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (d <= n)
		d <<= 1;
	d >>= 1;
	while (d > 0)
	{
		if (n & d)
			_putchar('1');
		else
			_putchar('0');
		d >>= 1;
	}
}
