#include "main.h"
/**
 * get_endianness - function that checks if a machine is a little or a big endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) & i;

	return (*c);
}
