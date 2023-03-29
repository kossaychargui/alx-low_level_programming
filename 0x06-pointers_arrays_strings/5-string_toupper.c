#include <ctype.h>
#include <string.h>

/**
 * string_toupper - function that changes all lowercases of string to uppercase
 *
 * @a: string to change its characters
 *
 * Return: the string with all character in uppercase
 *
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; i < strlen(a); i++)
	{
		if (isupper(a[i] != 0))
		{
			continue;
		}
		else
		{
			a[i] = toupper(a[i]);
		}
	}
	return (a);
}
