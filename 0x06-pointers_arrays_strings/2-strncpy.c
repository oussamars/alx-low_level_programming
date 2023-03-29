#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies a string.
 * @dest: the destination of a string
 * @src: the source of the string
 * @n: number of integers
 * Return: the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
