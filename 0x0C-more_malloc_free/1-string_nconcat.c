#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: int
 * Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, copy_len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
		copy_len = s2_len;
	else
		copy_len = n;
	concat = malloc(s1_len + copy_len + 1);
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strncat(concat, s2, copy_len);
	concat[s1_len + copy_len] = '\0';
	return (concat);
}
