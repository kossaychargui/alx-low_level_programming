/**
 * _pow_recursion - function that returns the value of x power y
 *
 * @x: first operand
 * @y: second operand
 *
 * Return: the result .
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
