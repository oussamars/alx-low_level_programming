#include "main.h"

/**
 * _isdigit - checks if the input is a digit
 * @c: is the character we check
 * Return: 1 if the input is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
