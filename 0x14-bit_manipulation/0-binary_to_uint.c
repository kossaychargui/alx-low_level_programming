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
	int i = 0, temp = 1, total = 0, c;

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			c = 0;
		}
		else if (b[i] == '1')
		{
			c = 1;
		}
		else
		{
			return (0);
		}
		total += c * temp;
		temp *= 2;
		i++;
	}
	return (total);
}
