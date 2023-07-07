#include "main.h"

/**
 * binary_to_uint - function that converts binary number to an int
 *
 * @b: the number to convert
 *
 * Return: the converted number otherwise 0 if b is null or contain chars
 *  other than 0 and 1's
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, temp = 1, total = 0;

	if (atoi(b) == 0)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		total += atoi(b[i]) * x;
		x *= 2;
		i++;
	}
	return (total);
}
