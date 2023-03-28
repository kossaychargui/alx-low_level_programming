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
	int i, len, lenth;

	len = strlen(str);

	if (len % 2 == 0)
	{
		lenth = len / 2;
	}
	else
	{
		lenth = (len - 1) / 2;
	}
	for (i = lenth; i < len; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
