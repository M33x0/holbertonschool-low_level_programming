#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: dog to be initialized.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* to access elements of a pointer to a structure */
	/* you have to dereference the pointer */
	/* and then access to the data */
	/* the simple way to do this is using '->' symbol */
	/* is the same than using '.' symbol */
	/* e.g (*ptr).name is the same than ptr->name but easier :) */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
