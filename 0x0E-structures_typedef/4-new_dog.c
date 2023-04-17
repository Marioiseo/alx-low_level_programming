#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - dont replace your dog please
 * @name: name of new one
 * @age: his age
 * @owner: the new owner age
 * Return: idk what should it return but null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecp;
	char *ownercp;

	name = namecp;
	owner = ownercp;
	if (new_dog)
	{
		new_dog.name = name;
		new_dog.age = age;
		new_dog.owner = owner;
	}
	else
	return (NULL);
}
