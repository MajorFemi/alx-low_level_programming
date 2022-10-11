#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type 'struct_dog'
 * @d: struct_dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owners name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
