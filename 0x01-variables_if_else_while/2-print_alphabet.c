#include <stdio.h>
/**
 *main - function that prints all the alphabet
 *
 *Return: (0) success
 */
int main(void)
{
	char c;
	int i;

	c = 'a';

	while (c < 'z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
