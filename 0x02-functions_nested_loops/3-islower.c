#include "main.h"

/**
 * _islower - check if the letter is lowercase.
 * @c: The character to be checked
 *
 * Return: 1 for lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
