#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: number of charcaters to concatenate from s2.
 *
 * Return: the two strings concatenated.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size, size1, size2, i, j;
	char *str;

	size1 = strlen(s1);
	if (n >= strlen(s2))
	{
		size2 = strlen(s2);
	}
	else
	{
		size2 = n;
	}
	size = size1 + size2;
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0 && i < size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
