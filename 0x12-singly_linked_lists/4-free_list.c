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
	list_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
