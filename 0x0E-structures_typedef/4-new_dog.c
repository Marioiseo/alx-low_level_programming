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
	char *namecp = name;
	char *ownercp = owner;
	dog_t *dog;

	(void)namecp;
	(void)ownercp;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
