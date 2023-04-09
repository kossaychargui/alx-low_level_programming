#include <string.h>

/**
 * _strncat - function that concatnate two strings but only n bytes from
 * the second string
 *
 * @dest: first string
 * @src: second string
 * @n: number of character from src
 *
 * Return: dest wich contains the first string and n bytes from src
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
