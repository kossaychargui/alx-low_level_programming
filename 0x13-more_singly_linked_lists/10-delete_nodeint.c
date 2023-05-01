#include "list.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

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
			if (count == index)
			{

