#include "main.h"

/**
 * set_bit - function that sets a 1 at a given index
 *
 * @n: the number to change
 * @index: the index
 *
 * Return: 1 otherwise 0 if an error is occurred.
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
