#include "lists.h"

/**
 * free_list - frees a list t list
 * @head: pointer to list t
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
