#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: (string) name to print.
 * @f: function that prints the name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
