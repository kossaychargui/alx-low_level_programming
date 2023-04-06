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
	int i, prime;
	
	prime = 1;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			prime = 0;
			break;
		}
	}
	return (prime);
}
