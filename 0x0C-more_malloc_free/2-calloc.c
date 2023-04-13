#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an arry using malloc.
 *
 * @nmemb: size of the array.
 * @size: size of each element .
 *
 * Return: a pointer to the allocated memory.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * sizeof(size));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
