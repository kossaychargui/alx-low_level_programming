#include "variadic_functions.h"
#include <stdarg.h>
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
	int sum, i;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	for (i = n;; va_arg(ap, int))
	{
		sum += i;
	}
	va_end(ap);
	return (sum);
}
