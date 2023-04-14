#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block.
 *
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size of the allocated space ptr.
 * @new_size: the new size of the new memory block.
 *
 * Return: new allocated memory.
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		ptr2 = malloc(new_size);
		ptr2 = ptr;
		return (ptr2);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		ptr2 = ptr;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr2);
}
