#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct functino to perform.
 *
 * @s: string to pass.
 *
 * Return: the result of the right function.
 *
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = s;
	return (ops[i]);
}

