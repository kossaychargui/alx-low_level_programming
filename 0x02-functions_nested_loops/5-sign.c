#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 *
 * @n: number
 *
 * Return:1 if the numbder is postive, 0 if its zero, -1 if it's negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
