#include "holberton.h"
#include <stdlib.h>

/**
* create_array - changes lowercase letters to uppercase
* @size: integer size of array to initialized
* @c: char to initialize the array with
* Return: a pointer to the array, or NULL if it fails
*/
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
