#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a  give index.
 *
 * @n: the number.
 * @index: the index of the value we want to know.
 *
 * Return: the value of a the bit at the index or -1 if an error occured.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	{
		return (-1);
	}
	bit_val = (n >> index) & 1;

	return (bit_val);
}

