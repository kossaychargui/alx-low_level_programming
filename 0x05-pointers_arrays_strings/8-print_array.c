#include <stdio.h>

/**
 * print_array - function that prints n element of an array of integers
 *
 * @a: the array
 * @n: the number of elements of array
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(*(str + i));
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
