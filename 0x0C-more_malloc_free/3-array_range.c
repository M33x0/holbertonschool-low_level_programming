#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - allocates memory for an array.
 * @min: integer first element
 * @max: integer last element
 * Return: Pointer to the array or NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}