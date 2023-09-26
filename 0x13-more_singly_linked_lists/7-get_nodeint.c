#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: head of the node
 * @index: index of the node
 *
 * Return: return NULL or the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (head != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
