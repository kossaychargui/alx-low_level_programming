#include <string.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to locate in
 * @c: charachter to locate
 *
 * Return: the first occurance of c in s otherwise NULL .
 *
 */
char *_strchr(char *s, char c)
{
	char *s1;

	s1 = strchr(s, c);
	if (s1 != NULL)
	{
		return (s1);
	}
	else
	{
		return (NULL);
	}
}
