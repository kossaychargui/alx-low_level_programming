#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t.
 *
 * @head: the head of the list.
 * @n: the elemtent of the new node.
 *
 * Return: the address of the new element or NULL if the memory allocation
 * failed.
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	while (current != NULL)
	{
		current = current->next;
		if (current->next == NULL)
		{
			current->next = new;
		}
	}
	return (new);
}
