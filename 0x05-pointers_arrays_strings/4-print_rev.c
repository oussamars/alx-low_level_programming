#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @*s: pointer
 */
void print_rev(char *s)
{
	int rev = 0;
	int o;

	while (*s != '0')
	{
		rev++;
		s++;
	}
	s--;
	for (o = rev; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
