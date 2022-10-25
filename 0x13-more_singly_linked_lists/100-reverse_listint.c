#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to address header
 *
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	(*head)->next = back;

	return (*head);
}
