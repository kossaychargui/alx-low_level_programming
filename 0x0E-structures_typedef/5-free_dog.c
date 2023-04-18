#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees a dogs.
 *
 * @d: dog to free.
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit (1);

	free(d);
}
