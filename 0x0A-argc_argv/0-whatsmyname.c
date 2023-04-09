#include <stdio.h>

/**
 * main - entry point of the program .
 *
 * @argc: an integer stands for number of arguments .
 * @argv: pointer of array of string the holds the arguments passed from user
 *
 * Return: (0) success .
 *
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
