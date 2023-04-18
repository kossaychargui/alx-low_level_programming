#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure that got some information about a dog.
 *
 * @name: string holds the dog's name.
 * @age: float holds the dog's age.
 * @owner: string holds the dog's owner.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* MAIN_H */
