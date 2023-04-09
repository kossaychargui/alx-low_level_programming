#include "main.h"
#include <ctype.h>

/**
 * _isupper - function checks for uppercase character.
 *
 * @c: charachter to be tested
 *
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
