#include "dog.h"
/**
 * free_dog - that frees dogs
 * @d: struct pointer
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d);
		free(d->name);
	}
}
