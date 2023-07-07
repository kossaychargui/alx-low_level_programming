#include "main.h"

/**
 * get_bit - function that return the value of a bit at a given index
 *
 * @n: the whole number
 * @index: the index
 *
 * Return: index , -1 if an error occured
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
