#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - concatenates two strings
 * @dest: is the destination string
 * @src: the soure string
 * @n: numbersto be appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
