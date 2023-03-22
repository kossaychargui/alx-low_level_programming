#include "main.h"
#include <stdio.h>
/**
 * add - function that adds two integers
 *
 * @x: the first opperand
 * @y: the second opperand
 *
 * return: the sum
 */
int add(int x, int y);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
int add(int x, int y)
{
	return (x + y);
}
