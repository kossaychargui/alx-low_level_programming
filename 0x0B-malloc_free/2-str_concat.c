#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if allocation failed or NULL is passed as an empty string
 * otherwise the two string concatenated.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int size;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	size = strlen(s1) + strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	strcat(s1, s2);
	strcat(str, s1);
	return (str);
	free(str);
}
