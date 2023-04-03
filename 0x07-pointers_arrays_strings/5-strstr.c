#include <string.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to scan
 * @needle: string to search in haystack
 *
 * Return: pointer to the beginning of the located substring otherwise NULL.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *check;

	check = strstr(haystack, needle);

	if (check != NULL)
	{
		return (check);
	}
	else
	{
		return (NULL);
	}
}
