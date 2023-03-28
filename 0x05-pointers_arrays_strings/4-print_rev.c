#include <string.h>
#include <stdio.h>

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: string to reverse
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", *(str + i));
	}
	putchar('\n');
}
