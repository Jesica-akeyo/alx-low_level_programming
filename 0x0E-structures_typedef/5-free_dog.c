#include "dog.h"
#include <stdio.h>

/**
 * free_dog -  frees dogs.
 * @d: pointer to a dog of type dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
