#ifndef DOG_H
#define DOG_H
/**
 * struct dog - lovely dogs
 * @name: the name of the dog
 * @owner: the name of owner
 * @age: the age of dog nor owner lol
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif

