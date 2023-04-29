#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list.
 *
 * @h: the list.
 *
 * Return: the number of element in the list.
 *
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t n;

	n = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
