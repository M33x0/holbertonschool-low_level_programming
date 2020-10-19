#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	free(d);
}
