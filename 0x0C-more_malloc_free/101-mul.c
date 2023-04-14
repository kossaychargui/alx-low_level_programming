#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - function that checks if a string is only composted of digits.
 *
 * @argv: array of string.
 * @i: index of the string to check in the array.
 *
 * Return: 1 if it's only composed of digits othewise 0 .
 *
 */
int _isdigit(char **argv, int i)
{
	int j;

	j = 0;
	while (argv[i][j] != '\0')
	{
		if (isdigit(argv[i][j] != 1))
		{
			return (0);
		}
		j++;
	}
	return (1);
}
/**
 * main - entry point of the program . that programs multiplies two positive numbers.
 *
 * @argc: number of arguments passed in the command line.
 * @argv: array of strings passed in the command line .
 *
 * Return: 98 if the number of arguments is incorrect or a non digit strings
 * passed otherwise 0 (success) .
 *
 */
int main(int argc, char **argv)
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (_isdigit(argv, 1) != 1 || _isdigit(argv, 2) != 1)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
	}
	return (mul);
}
