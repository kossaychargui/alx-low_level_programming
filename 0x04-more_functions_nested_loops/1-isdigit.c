#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 *
 * @c: charachter to be checked
 *
 *Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
