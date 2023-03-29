#include <string.h>

/**
 * _strcat - function that concatenate two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: resturs dest wich contains the both of the stirngs
 *
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
