#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to copy.
 *
 * Return: NULL if the str = NULL or the allocation failed otherwise the copy.
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	dup = (char *) malloc(sizeof(char) * size);
	strcpy(dup, str);
	return (dup);
	free(dup);
}
