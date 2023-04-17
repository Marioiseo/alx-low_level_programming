#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialize it now
 * @d: doggy doggy
 * @name: just follow
 * @age: sorry not sorry
 * @owner: doggy doggy
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	exit(1);
	else
	d->name = name;
	d->age = age;
	d->owner = owner;
}
