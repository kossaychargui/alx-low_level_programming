#include "main.h"

/**
 * _sqrt_recrusion - function that returns the square root of a number
 *
 * @n: integer to give the sqrt
 *
 * Return: the sqare root of n.
 *
 */
int _sqrt_recrusion(int n)
{
	int i, s;

	s = 0;

	for (i = 0; i < n; i++)
	{
		if (i * i == n)
		{
			s = i;
		}
	}
	if (s != 0)
	{
		return (s);
	}
	else
	{
		return (-1);
	}
}
