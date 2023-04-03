#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: string to be filled
 * @b: value to be filled
 * @n: number of byte to be filled
 *
 * Return: pointer to the momory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
