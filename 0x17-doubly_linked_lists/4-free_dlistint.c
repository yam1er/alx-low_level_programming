#include "lists.h"

/**
 * free_dlistint - Frees a linked list
 * @head: The head of the dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *buf;

	while (head)
	{
		buf = head->next;
		free(head);
		head = buf;
	}
}
