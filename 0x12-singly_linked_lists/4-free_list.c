#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list.
 *
 * @head: the list.
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp
	}
}
