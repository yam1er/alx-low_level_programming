#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 * @h: node to print
 *
 * Return: a formated caracter
 */

size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count_node++;
		h = h->next;
	}

	return (count_node);

}
