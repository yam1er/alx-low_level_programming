#include "lists.h"

/**
 * listint_len - return the number of element in a linked list
 * @h: head of linked list
 * Return: number of element in a linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *indice = h;

	while (indice != NULL)
	{
		count++;
		indice = indice->next;
	}

	return (count++);
}
