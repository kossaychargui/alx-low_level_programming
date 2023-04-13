#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: size to allocate.
 *
 * Return: if the allocation fails the function cause normal prcess temination
 * with a status of a value of 98.
 *
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
}
