#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: head of the list
 * @idx: index to insert new_node
 * @n: new_node data
 *
 * Return: a new list
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int  idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}

	prev_node = *head;

	for (i = 0; i < (idx - 1); i++)
	{
		if (prev_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

		prev_node = prev_node->next;
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);


}
