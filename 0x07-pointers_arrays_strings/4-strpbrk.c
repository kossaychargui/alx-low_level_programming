#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string to scan
 * @accept: string to search in s
 *
 * Return: pointer to s otherwise NULL .
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *match;

	match = strpbrk(s, accept);

	if (match != NULL)
	{
		return (match);
	}
	else
	{
		return (NULL);
	}
}
