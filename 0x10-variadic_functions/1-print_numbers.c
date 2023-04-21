#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers .
 *
 * @seperator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 */
void print_numbers(const char *seperator, unsigned int n, ...)
{
	unsigned int i, j;
	va_list ap;

	va_start(ap, n);
	j = 0;
	for (i = n; j < n; i = va_arg(ap, unsigned int))
	{
		putchar(i % 10 + '0');
		if (seperator != NULL)
		{
			putchar(seperator[0]);
		}
		j++;
	}
	putchar('\n');
	va_end(ap);
}
