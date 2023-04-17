#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize it now
 * @dog: doggy doggy
 * @name: just follow
 * @age: sorry not sorry
 * @owner: doggy doggy
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d->name = name;
	*d->age = age;
	*d->owner = owner;
}
