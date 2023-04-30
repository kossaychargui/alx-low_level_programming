#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a list.
 *
 * @head: the head of the list.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

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
			free(current);
			current = next;
		}
	}
}
