#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @x: integer
 *
 * Return: returns the last digit.
 */
int print_last_digit(int x)
{
	int h;

	h = x % 10;

	_putchar('0' + h);
	return (abs(h));
}
