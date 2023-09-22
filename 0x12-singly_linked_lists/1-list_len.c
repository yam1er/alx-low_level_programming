#include "lists.h"

/**
 * list_len - return number of elements in a linked
 * @h: list to count
 *
 * Return: numer of element
 */

size_t list_len(const list_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		count_node++;
		h->next;
	}

	return (count_node);
}
