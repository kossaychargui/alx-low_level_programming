#include <unistd.h>

/**
 * _putchar - function that prints a char
 *
 * @c: charachter to be printed
 *
 * Return: on success 1.
 * On eroor, -1 is returned, and errno is set appropriately.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
