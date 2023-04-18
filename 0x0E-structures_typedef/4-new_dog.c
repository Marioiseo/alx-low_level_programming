#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *namecp, *ownercp;
	dog_t *dog;

	namecp = malloc(strlen(name) + 1);
	if (namecp == NULL)
		return (NULL);
	strcpy(namecp, name);
	ownercp = malloc(strlen(owner) + 1);
	if (ownercp == NULL)
		return (NULL);
	strcpy(ownercp, owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(strlen(owner) + 1);
		if (dog->owner == NULL)
		{
		free(dog->name);
		free(dog);
		return (NULL);
		}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
