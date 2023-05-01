#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next, *tmp;

	if (h == NULL)
		return (0);
	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		size++;
		next = current->next;
		current->next = NULL;
		tmp = current;
		current = next;
		free(tmp);
		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	return (size);
}
