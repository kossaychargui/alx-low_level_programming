/**
 * reverse_array - funtion that reverse an array
 *
 * @a: array of integers to reverse
 * @n: number of element of the array
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, i, len, j;

	len = n / 2;
	j = n - 1;

	for (i = 0; i < len; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
