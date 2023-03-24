#include "main.h"
#include <stdio.h>

/**
 * main - entry point. function prints numbers from 1 to 100 but for multiples
 * of 3 print "Fizz" instead and for multipel of 5 print "Buzz".
 *
 * @void: no argument
 *
 * Return: 0 always.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
