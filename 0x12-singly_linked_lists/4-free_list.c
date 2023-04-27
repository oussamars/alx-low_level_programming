#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: is a pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
