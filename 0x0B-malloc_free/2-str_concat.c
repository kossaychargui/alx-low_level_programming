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
	int size, size1, size2, i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = strlen(s1);
	size2 = strlen(s2);
	size = size1 + size2 + 1;
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
