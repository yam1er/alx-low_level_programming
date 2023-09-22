#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t
 * @head: first node adress
 * @str: node string
 *
 * Return: pointer of new node
 */

list_ *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
