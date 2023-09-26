#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int i;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	previous->next = current->next;
	free(current);

	return (1);
}
