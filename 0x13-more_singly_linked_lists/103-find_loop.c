#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to address to head
 *
 * Return: the address of the node where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	turtle = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (turtle == hare)
		{
			turtle = head;

			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}

			return (turtle);
		}

		turtle = turtle->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
