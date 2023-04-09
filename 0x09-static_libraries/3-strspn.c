#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to search in
 * @accept: string containing the character to match
 *
 * Return: number of bytes in the intial segment of s only from accecpt
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);

	return (len);
}
