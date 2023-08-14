#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - initializes the structure of the type of dog
 * @d: pointer in structure
 * @name: pointer in the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of dog
 *
 * Return: void
 */
void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
