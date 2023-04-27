#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: is a pointer
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("-> 0 elements\n");
		else
			printf("-> %ld elements\n", count);
		h = h->next;
		count++;
	}
	return (count);
}
