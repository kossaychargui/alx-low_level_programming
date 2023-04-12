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
	int size, size1, size2;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
		size1 = 0;
	}
	if (s2 == NULL)
	{
		s2 = "";
		size2 = 0;
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2 + 1;
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	str = s1;
	(str + strlen(s1)) = s2;
	return (str);
	free(str);
}
