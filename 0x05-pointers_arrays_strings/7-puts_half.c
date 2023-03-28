#include <string.h>
#include <stdio.h>

/**
 * puts_half - function that prints the second half of a string
 *
 * @str: string to print the half
 *
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
