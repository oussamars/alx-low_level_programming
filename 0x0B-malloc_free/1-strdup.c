#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer in success and NULL in failure
 */
char *_strdup(char *str)
{
	char *dupli;

	if (str == NULL)
	{
		return (NULL);
	}
	dupli = malloc(strlen(str) + 1);
	if (dupli == NULL)
	{
		return (NULL);
	}
	strcpy(dupli, str);
	return (dupli);
}
