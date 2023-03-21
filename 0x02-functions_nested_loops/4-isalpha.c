#include "main.h"

/**
 * _isalpha - checks if the input is an alphabet
 * @c: the character to be checked
 *
 * Return: 1 for an alphabet and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
