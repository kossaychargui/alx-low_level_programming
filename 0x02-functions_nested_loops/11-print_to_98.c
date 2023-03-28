#include "main.h"
void print_to_98(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar((i / 10) + '0');
		if (i == (n - 1))
		{
			continue;
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
