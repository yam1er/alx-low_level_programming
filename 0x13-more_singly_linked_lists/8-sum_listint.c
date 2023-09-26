#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of the linked list
 * @head: head of yhe node
 *
 * Return: some of the linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
