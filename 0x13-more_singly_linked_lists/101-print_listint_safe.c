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
	const listint_t *current;
	size_t count = 0;
	const listint_t *check;

	current = head;

	while (current != NULL)
	{
		count++;
		printf("[%p] %\n", (void *)current, current->n);

		check = head;
		for (size_t i = 0; i < count; i++)
		{
			if (check == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			check = check->next;
		}

		current = current->next;
	}
	return (count);
}


/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to a pointer to the head of the list
 */

void free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return;

	current = *h;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		*h = NULL;
	}
}
