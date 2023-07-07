#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that converts a number into binary
 *
 * @n: number to convert
 *
 * Return: no return
 *
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
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
		{
			putchar('0');
		}
	}
	if (!count)
	{
		putchar('0');
	}
}
