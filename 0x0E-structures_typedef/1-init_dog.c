#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog with the given values
 *
 * @d: a pointer to the struct dog to initialize
 * @name: the dog's name
 * @age: the dog's age in years
 * @owner: the dog's owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
