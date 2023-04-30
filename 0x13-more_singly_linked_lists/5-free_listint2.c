#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list.
 * and sets head to NULL.
 *
 * @head: the head of the list.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next, *new_head __attribute__((unused));

	if (head == NULL)
	{
		return;
	}
	else
	{
		current = (*head)->next;
		new_head = *head;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		free(new_head);
		new_head = NULL;
	}
}
