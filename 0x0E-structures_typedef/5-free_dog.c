#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free mem allocated to struct dog
 *
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
