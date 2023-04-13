#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocate a block of memory.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Size of the allocated space for @ptr.
 * @new_size: New size to allocate.
 *
 * Return: Pointer to the new allocated memory block.
 *         NULL if new_size is 0 and ptr is not NULL.
 *         NULL if the function fails to allocate
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	p = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = p[i];
	free(ptr);
	return (new_ptr);
}
