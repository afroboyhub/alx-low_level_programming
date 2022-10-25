#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: a pointer to address of head
 * @index: the index of the node to locate
 *
 * Return: if the ndoe does not exist NULL or locate node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
