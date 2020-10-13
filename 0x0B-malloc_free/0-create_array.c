#include "holberton.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int  i;
	char *arr = NULL;

	if (size == 0)
	{
		return (0);
	}
	arr = malloc(sizeof(char) * size);
	/*if alloction failed*/
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
