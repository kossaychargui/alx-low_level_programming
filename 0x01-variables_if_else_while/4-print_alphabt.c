#include <stdio.h>
/**
 * main - fuction that prints all the alphabet in lower case except e and q
 *
 *Return: (0) success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
