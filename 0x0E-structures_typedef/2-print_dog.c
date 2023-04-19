#include "dog.h"

/**
 * print_dog - print a struct dog
 *
 * @d: pointer to struct dog
 *
 * Return: structur
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->age != NULL)
		{
			printf("Age: %.3f\n", d->age);
		}
		else
		{
			pintf("Age: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
