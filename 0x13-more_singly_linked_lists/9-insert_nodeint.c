#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - function that inserts a new node at a given postion
 *
 * @head: the address of the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the data to insert in the new node.
 *
 * Return: the adress of the new node, or NULL if failed.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int count;

	count = 0;
	idx++;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	current = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (current != NULL)
		{
			if (count + 1 == idx)
			{
				new->next = current->next;
				current->next = new;
				return (new);
			}
			current = current->next;
			count++;
		}
	}
	return (NULL);
}
