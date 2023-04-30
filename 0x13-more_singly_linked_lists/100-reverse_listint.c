#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a linked list
 * @head: is a double pointer of the head of a list
 * Return: data of the node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
