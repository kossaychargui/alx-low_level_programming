#include <string.h>

/**
 * _memcpy - function that copies memory area
 *
 * @dest: string to copy in
 * @src: string to copy
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
