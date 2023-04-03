#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in a string
 * @s: first char
 * @c: second char
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
