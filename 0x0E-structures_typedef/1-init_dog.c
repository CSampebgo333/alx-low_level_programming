#include "dog.h"

/**
 * init_dog - initialize element of type dog
 *
 * @d: pointer to the dog structure
 *
 * @name: pointer to the nam of the dog
 *
 * @age: pointer to the age of the dog
 *
 * @owner: pointer to the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
