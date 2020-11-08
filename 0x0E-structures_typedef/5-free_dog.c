#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the structure dog
 * @d: Address of d
 **/
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
