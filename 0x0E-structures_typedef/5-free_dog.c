#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - run doggy run
 * @d: doggy doggy
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
