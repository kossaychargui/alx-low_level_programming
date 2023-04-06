#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the square root of a number
 *
 * @n: integer to give the sqrt
 *
 * Return: the sqare root of n.
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function calculates natural square root
 *
 * @n: integer to calculate the sqrare root
 * @i: iterate number
 *
 * Return: the natural sqare root
 *
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
