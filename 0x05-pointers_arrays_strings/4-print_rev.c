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
	int i, j, len;
	char tmp;

	len = strlen(s) / 2;
	j = strlen(s);
	for (i = 0; i <= len; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}
	puts(s);
}
