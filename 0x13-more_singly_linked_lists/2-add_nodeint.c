#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: head of a given list
 * @n: data of the new node
 * Return: pointer of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	return (NULL);
}
