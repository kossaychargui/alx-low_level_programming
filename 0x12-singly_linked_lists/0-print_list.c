#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: a list.
 *
 * Return: the number of nodes in the list.
 *
 */
size_t print_list(const list_t *h)
{
	size_t n;
	const list_t *current;

	current = h;
	n = 0;
	if (current->next != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%ld] %s\n", strlen(current->str), current->str);
		}
		n++;
		current = current->next;
	}
	return (n);
}
