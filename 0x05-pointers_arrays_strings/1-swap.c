/**
 * swap_int - function that swpas the values of two integers
 *
 * @a: first interger to swap
 * @b: second integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
