#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representatino of a number.
 *
 * @n: the number to convert.
 *
 */
void print_binary(unsigned long int n)
{
	int i, count;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
	{
		putchar('0');
	}
}
