#include <stdio.h>
#include "dog.h"
/**
 * init_dog - create a new dog
 * @d: srtuct
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}

}

