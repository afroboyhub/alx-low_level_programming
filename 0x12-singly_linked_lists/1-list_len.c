#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list t
 * @h: The linked list_t list
 *
 * Return: the number of elements in node
 */

size_t list_len(const list_t *h)
{
	size_t elmt = 0;

	while (h)
	{
		elmt++;
		h = h->next;
	}

	return (elmt);
}
