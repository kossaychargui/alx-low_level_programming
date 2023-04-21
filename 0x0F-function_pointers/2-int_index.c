#include "function_pointers.h"

/**
 * int_index - function that searches for integer.
 *
 * @array: array of integers to search in.
 * @size: size of the array.
 * @cmp: a pointer to a function that compares value.
 *
 * Return: the index of the first element that matches with the value compared
 * if no element matches -1 .
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, match;

	if (array == NULL || cmp == NULL)
	{
		return;
	}
	match = -1;
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (match);
}
