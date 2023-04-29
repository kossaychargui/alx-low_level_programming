#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - function that prints all the elements of listint_t list .
 *
 * @h: the list to print its elements.
 *
 * Return: number of nodes in the list.
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t n;

	n = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
