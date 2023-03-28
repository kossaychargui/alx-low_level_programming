#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int rand_pass;

	rand_pass = rand();

	printf("%d\n", rand_pass);
	return (0);
}
