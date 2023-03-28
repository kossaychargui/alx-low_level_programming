#include <string.h>

/**
 * _strcpy - function that copies the string to by src to the buffer dest
 *
 * @dest: buffer to copy in
 * @src: buffer to be copyied into dest
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (*dest);
}
