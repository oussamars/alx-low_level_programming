#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h: is a pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%ld\n", count);
		h = h->next;
		count++;
	}
	return (count);
}
