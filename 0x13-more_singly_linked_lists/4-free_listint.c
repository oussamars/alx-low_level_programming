#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: is a pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
