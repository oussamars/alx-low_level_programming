#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: num of bytes
 * @accept: bytes accepted from s
 * Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		len++;
	}

	return (len);
}
