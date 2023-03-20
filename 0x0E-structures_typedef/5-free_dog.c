#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 * @d: Pointer to struct dog which named dog_t.
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
