#include "main.h"
#include <ctype.h>
/**
 * _islower - function that cheks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a lowercase else 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
