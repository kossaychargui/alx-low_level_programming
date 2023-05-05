#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a give index.
 *
 * @n: the number to edit.
 * @index: index.
 *
 * Return: 1 success, -1 failed.
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
