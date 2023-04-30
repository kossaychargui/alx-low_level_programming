#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of listint_t list.
 *
 * @head: the head of the list.
 * @index: node index.
 *
 * Return: the nth node, or NULL if the node does not exist.
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	count = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		current = head;
		while (current != NULL)
		{
			if (count == index)
			{
				return (current);
			}
			current = current->next;
			count++;
		}
	}
	return (NULL);
}
