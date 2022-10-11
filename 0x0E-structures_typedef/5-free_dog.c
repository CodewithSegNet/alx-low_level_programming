#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free_dog struct memory
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
