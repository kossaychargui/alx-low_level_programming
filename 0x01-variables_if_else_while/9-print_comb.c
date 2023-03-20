#include <stdio.h>
/**
 * main - function that prints all single digits from 0 to 10 seperated
 *
 *Return: (0)  success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58 ; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
