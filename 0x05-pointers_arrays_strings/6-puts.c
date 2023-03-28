#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: string
 *
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
