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
#include <stdlib.h>

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
