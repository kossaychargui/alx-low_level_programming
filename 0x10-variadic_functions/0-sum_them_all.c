#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: first argument .
 *
 *
 * Return: 0 if n = 0 otherwise the sum.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	for (i = 0;i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
