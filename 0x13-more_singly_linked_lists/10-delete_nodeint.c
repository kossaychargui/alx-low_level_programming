#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index (index).
 *
 * @head: the adress of the list's head.
 * @index: index of the node to delete.
 *
 * Return: 1 if success, -1 i failed.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current, *temp;

	count = 0;
	current = *head;
	if (current == NULL)
	{
		return (-1);
	}
	else
	{
		while (current != NULL)
		{
			if (index == 0)
			{
				temp = current;
				current = current->next;
				*head = current;
				free(temp);
				return (1);
			}
			if (count + 1 == index)
			{
				temp = current->next;
				current->next = current->next->next;
				free(temp);
				return (1);
			}
			current = current->next;
			count++;
		}
	}
	return (-1);
}
