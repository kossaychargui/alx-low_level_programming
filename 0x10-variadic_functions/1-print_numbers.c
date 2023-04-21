#include "varidid_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers .
 *
 * @seperator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 */
void print_numbers(const char *seperator, unsigned int n, ...)
{
	int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		putchar(va_arg(ap, unsigned int) + '0');
		if (seperator != NULL)
		{
			putchar(seperator);
		}
	}
	putchar('\n');
	va_end(ap);
}
