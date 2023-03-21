#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
