#include "lists.h"

/**
 * sum_listint - returns summ of all the data(n) of list
 * @head: a pointer to address head
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
