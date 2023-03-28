#include "main.h"
/**
 * rev_string - reverses a string
 * @s: character
 */
void rev_string(char *s)
{
	int len, z, h;
	char t;

	for (len = 0; s[len] != '0'; len++)
	;
	z = 0;
	h = len / 2;

	while (h--)
	{
		t = s[len - z - 1];
		s[len - z - 1] = s[z];
		s[z] = t;
		z++;
	}
}
