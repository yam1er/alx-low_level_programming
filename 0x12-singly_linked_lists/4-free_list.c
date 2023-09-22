#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: first node adress
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		free(current->str);
		free(current);
		head = head->next;
	}
}
