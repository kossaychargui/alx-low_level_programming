#include <ctype.h>
#include <string.h>

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @a: string to capitalize
 *
 * Return: a
 *
 */
char *cap_string(char *a)
{
	int i, j;

	for (i = 0; i < strlen(a); i++)
	{
		switch (a[i])
		{
			case ' ':
			case ',':
			case '	':
			case '\n':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				for (j = i; j < strlen(a); j++)
				{
					if (a[i] == ' ')
					{
						continue;
					}
					else
					{
						a[i] = toupper(a[i]);
					}
				}
				break;
		}
	}
	return (a);
}
