/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 *@s: string to print
 *
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = strlen(s) - 1;
	_putchar(*(s + len));
	s--;
	_print_rev_recursion(s);
}
