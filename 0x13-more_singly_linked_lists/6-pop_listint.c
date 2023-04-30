#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node of listint_t linked list,
 * and returns the head nodes's data.
 *
 * @head: the head of the list.
 *
 * Return: the dead node's data, 0 if the list is empty.
 *
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;
		new_head = (*head)->next;
		free(*head);
		*head = new_head;
	}
	return (data);
}
