#include "calc.h"

/**
 * op_add - funtion that adds to integers.
 *
 * @a: first operant.
 * @b: second operant.
 *
 * Return: the sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - funtion that substruct two integer.
 *
 * @a: first oprerant.
 * @b: second operant.
 *
 * Return: the difference of a and b.
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies two integers.
 *
 * @a: first operant.
 * @b: second operant.
 *
 * Return: the product of a and b.
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that devide integer by another one.
 *
 * @a: first operand.
 * @b: second operand.
 *
 * Return: the resul of the division of a by b.
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that return the remainder of division of two integers.
 *
 * @a: first operant.
 * @b: second operant.
 *
 * Return: the remainder of the division of a by b.
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
