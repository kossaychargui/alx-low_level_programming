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
int main(int argc, char **argv)
{
	int num1, num2, calc;
	char *op;

	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	calc = (*get_op_func(op))(num1, num1);
	printf("%d\n", calc);
	return (0);
}

