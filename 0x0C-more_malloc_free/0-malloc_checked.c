#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: p or failure
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}
	return (p);
}
