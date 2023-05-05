#include "main.h"
/**
 * flip_bits - function that returns the number of bits you need to filp to get
 * from n to m.
 *
 * @n: the number to go from .
 * @m: the number to go to.
 *
 * Return: the number of flips.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;
	unsigned long int current;
	unsigned long int exclusive;

	count = 0;
	exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
