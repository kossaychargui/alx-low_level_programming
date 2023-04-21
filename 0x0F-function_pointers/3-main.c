#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program. a program of a calculator.
 *
 * @argc: number of argumnts passed in the command line.
 * @argv: array of strings holds the command passed in the command line.
 *
 * Return: (0) success.
 *
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int a, b, result;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (*get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}

