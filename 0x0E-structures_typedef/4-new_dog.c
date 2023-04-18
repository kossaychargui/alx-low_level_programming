#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 *
 * @name: string holds the dog's name.
 * @age: float that holds the dog's age.
 * @owner: string holds the dog's owner.
 *
 * Return: the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
