#include <string.h>

void rev_string(char *s)
{
	int len, i, j;
	char tmp;

	len = strlen(s) / 2;
	j = strlen(s) - 1;

	for (i = 0; i < len ; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
		j--;
	}
}
