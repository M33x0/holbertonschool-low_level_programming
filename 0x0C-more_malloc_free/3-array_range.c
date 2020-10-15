#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - allocates memory for an array.
 * @min: integer first element of the array
 * @max: integer last element of the array
 * Return: If min > max or the function fails - NULL.
 *   Otherwise - a pointer to the newly created array.
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
