#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of a list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t **temp = head;

	if (*temp != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			free(current);
			*head = (*head)->next;
		}
		*temp = NULL;
	}	
}
