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
	list_t *current, *next;

	current = head;
	if (current == NULL)
	{
		return;
	}
	else
	{
		while (current != NULL)
		{
			next = current->next;
			free(current->str);
			free(current);
			current = next;
		}
	}
}
