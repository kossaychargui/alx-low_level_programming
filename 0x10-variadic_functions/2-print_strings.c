#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings.
 *
 * @seperator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if ((seperator != NULL) && (i != n - 1))
		{
			printf("%s", seperator);
		}
	}
	putchar('\n');
	va_end(ap);
}
