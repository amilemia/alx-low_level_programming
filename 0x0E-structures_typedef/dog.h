#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog with a name, age, and owner
 *
 * @name: a pointer to the dog's name (a C-string)
 * @age: the dog's age in years (a float)
 * @owner: a pointer to the dog's owner's name (a C-string)
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
