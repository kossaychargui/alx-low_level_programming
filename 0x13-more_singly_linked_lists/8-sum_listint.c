#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data(n) of a list.
 *
 * @head: the head of the list.
 *
 * Return: the sum, 0 if the list is empty.
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		current = head;
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
