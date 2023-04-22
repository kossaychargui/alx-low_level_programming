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
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((seperator != NULL) && (i != n - 1))
		{
			printf("%s", seperator);
		}
		j++;
	}
	putchar('\n');
	va_end(ap);
}
