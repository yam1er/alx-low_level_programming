#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked
 * @n: integer
 * @next: point to the next nod
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#include <stdio.h>

size_t print_listint(const listint_t *h);

#endif
