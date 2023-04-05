/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: integer to calculate the facotrial
 *
 * Return: the factorial of n.
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
