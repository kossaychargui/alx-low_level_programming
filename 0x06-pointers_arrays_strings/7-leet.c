#include <string.h>

/**
 * leet - function that encodes a string into 1337 .
 *
 * @a: string to encode
 *
 * Return: encoded string a
 *
 */
char *leet(char *a)
{
	int i;

	for (i = 0; i < strlen(a); i++)
	{
		switch (a[i])
		{
			case 'a':
			case 'A':
				a[i] = '4';
			case 'e':
			case 'E':
				a[i] = '3';
			case 'o':
			case 'O':
				a[i] = '0';
			case 't':
			case 'T':
				a[i] = '7';
			case 'l':
			case 'L':
				a[i] = '1';
				break;
			default:
				break;
		}
	}
	return (a);
}
