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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* MAIN_H */
