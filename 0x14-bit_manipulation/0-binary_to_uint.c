#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * _pow_recursion - function that returns the value of x power y
 *
 * @x: first operand
 * @y: second operand
 *
 * Return: the result .
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string of 0 and 1 .
 *
 * Return: the converted number , 0 if there is one or more chars in b
 * or b is NULL .
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, len;

	num = 0;
	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b) - 1;
	for (i = len; i >= 0; i--)
	{
		if (isdigit(*(b + i)) != 0)
		{
			num += (b[i] - '0') * _pow_recursion(2, i);
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
