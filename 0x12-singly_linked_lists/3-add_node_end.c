#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - funtion that adds a node at the end of a list_t list.
 *
 * @head: the list.
 * @str: the element to add .
 *
 * Return: the address of the last element or NULL if fails.
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last;

	last = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	return (temp);
}
