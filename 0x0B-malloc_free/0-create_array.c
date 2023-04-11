#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and insitalizes it
 * with a specific char .
 *
 * @size: the size of the array.
 * @c: the char to intialize the array with.
 *
 * Return: NULL if the size = 0 or if the allocation fails otherwise the array.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *) malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	*str = c;
	return (str);
}
