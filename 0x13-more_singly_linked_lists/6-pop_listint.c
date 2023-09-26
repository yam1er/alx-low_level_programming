#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head of the list
 *
 * Return: data of the list
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	} else
	{
		return (0);
	}
	return (data);
}
