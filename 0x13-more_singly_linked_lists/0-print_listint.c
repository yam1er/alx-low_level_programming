#include "lists.h"

/**
 * print_listint - print all the element of a listint_t list
 * @h: head of the list
 *
 * Return: number of element of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *indice = h;

	while (indice != NULL)
	{
		printf("%d\n", indice->n);
		indice = indice->next;
		count++;
	}

	return (count);

}
