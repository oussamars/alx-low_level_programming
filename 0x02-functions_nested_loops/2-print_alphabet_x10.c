#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets ten times
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 97; letter < 123; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
