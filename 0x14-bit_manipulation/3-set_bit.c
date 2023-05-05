#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a give index .
 *
 * @n: the number to edit.
 * @index: the index.
 *
 * Return: 1 if it worked , -1 if an eorrr occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);

	return (1);
}
