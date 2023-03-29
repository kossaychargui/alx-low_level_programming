#include <string.h>

/**
 * _strncpy - function that copies a string
 *
 * @dest: string to copy in
 * @src: strign to copy into dest
 * @n: number of character to copy from src to dest
 *
 * Return: return dest that contains a copy (only n charachters) from src
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
