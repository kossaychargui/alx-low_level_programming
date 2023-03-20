#include <stdio.h>
/**
 * main - function that prints all digits from zero to ten
 *
 *Return: (0) success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
