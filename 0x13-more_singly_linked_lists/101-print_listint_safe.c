#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *fast;
	size_t nnodes = 0;

	if (head == NULL)
		return (0);
	current = head;
	fast = head;

	while (current != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nnodes++;

		current = current->next;
		fast = fast->next->next;

		if (current == fast)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (nnodes);
}
