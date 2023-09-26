#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t linked list
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: A pointer to the list reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
