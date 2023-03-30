#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char *str = s;
	char *leet_chars = "43071";
	char *alpha = "aAeEoOtTlL";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = leet_chars[j / 2];
			}
		}
	}
	return (str);
}
