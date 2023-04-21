#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that excutes a function given as a parameter
 * on each element of the array.
 *
 * @array: array of integers.
 * @size: size of the array.
 * @action: function to apply to the element of the array.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
