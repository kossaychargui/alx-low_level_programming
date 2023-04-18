#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - funtion that intialize a variable type struct dog.
 *
 * @d: struct .
 * @name: string holds the name of the dog.
 * @age: float holds the age of the dog.
 * @owner: string holds the dog's owner.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
