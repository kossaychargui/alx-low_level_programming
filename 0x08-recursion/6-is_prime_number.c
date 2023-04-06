/**
 * is_prime_number - function that check if a number is a prime number .
 *
 * @n: number to check
 *
 * Return: 1 if the integer is a prime number othewise 0 .
 *
 */
int is_prime_number(int n)
{
	int i;

	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0)
		}
		else
		{
			return (1);
		}
	}
}
