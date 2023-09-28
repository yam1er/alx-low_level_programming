#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: Pointer to the head of the list
 * Return: The address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *torture = head, *lievre = head;

	while (torture && lievre && lievre->next)
	{
		torture = torture->next;
		lievre = lievre->next->next;

		if (torture == lievre)
		{
			torture = head;
			while (torture != lievre)
			{
				torture = torture->next;
				lievre = lievre->next;
			}
			return (torture);
		}
	}

	return (NULL);
}
