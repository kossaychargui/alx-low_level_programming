#include "main.h"

/**
 * print_numbers - function that prints numbers for 0 to 9
 *
 * @void: no argument
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
