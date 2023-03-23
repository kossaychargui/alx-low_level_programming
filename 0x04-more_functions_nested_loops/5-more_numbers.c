#include "main.h"

/**
 * more_numbers - function that prints numbers from 0 to 14 x10
 *
 * @void: no argument
 *
 */
void more_numbers(void)
{
	int j, i;

	j = 0;

	while (j < 10)
	{

		for (i = 0; i <= 14; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}

