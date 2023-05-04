#include "main.h"
#include <ctype.h>
#include <stdlib.h>
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
	int count;
	unsigned int num;
	int i;

	i = 0;
	num = 0;
	count = 1;
	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*(b + i) == 0)
		{
		num += (atoi(*(b + i)) * count);
		i++;
		num *= 2;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
