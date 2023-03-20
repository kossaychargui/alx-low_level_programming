#include <stdio.h>
/**
 * main - function that prints combination of three numbers with diffrent
 * digits
 *
 *Return: (0) success
 */
int main(void)
{
	int i, j , h;

	for (i = '0'; i < '8'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (h = '0'; h <= '9'; h++)
			{
			if (i != j && i != h)
				continue;
			else
			{
			putchar(i);
			putchar(j);
			putchar(h);
			}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
