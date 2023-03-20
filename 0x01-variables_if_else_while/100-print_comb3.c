#include <stdio.h>
/**
 * main - function that prints all possible combination of two digits
 *
 *Return: (0) success
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < '9' ; i++)
	{
		for (j = '0'; j <= '9' ; j++)
		{
			if (i != j)
			{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

