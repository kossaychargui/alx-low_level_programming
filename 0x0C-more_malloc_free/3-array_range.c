#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creaates an array of integers.
 *
 * @min: first element of the array.
 * @max: last element of the array.
 *
 * Return: a pointer to the array.
 *
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
