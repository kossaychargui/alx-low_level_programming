#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function checks for alphabetic character.
 *
 * @c: character
 *
 * Return: 1 if c is a letter,lower case or uppercase else 0
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
