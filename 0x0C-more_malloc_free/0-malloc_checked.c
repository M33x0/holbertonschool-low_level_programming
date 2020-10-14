#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: 98 if malloc fails, pointer to memory allocated otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(sizeof(b));
	if (memory == NULL)
	{
		exit(98);
	}
	else
	{
		return (memory);
	}
}
