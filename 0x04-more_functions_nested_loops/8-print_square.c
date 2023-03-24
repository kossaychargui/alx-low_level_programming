#include "main.h"

/**
 * print_square - function that prints a square
 *
 *@size: length of the square
 *
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

