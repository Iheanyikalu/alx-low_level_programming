#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - new dog struct, with variable to initialize
 *
 * @d: pointer to the struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
			return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
