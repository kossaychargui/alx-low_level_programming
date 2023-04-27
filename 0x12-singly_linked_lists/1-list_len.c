#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * list.
 *
 * @h: the list.
 *
 * Return: the number of elemtns in h.
 */
size_t list_len(const list_t *h)
{
	size_t n;
	const list_t *current;

	current = h;
	n = 0;
	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
