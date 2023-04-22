#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings.
 *
 * @seperator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	va_stat(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) != NULL)
		{
			printf("%s", va_arg(ap, char*));
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
