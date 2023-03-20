#include <stdio.h>
/**
 * main - fuction that prints the alphabet in reverse
 *
 *Return:(0) success
 */
int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
