#include "holberton.h"
#include <stdlib.h>

/**
*_strdup - returns a pointer to a newly allocated space
* @str: char ,string to copied
* Return: a pointer to the duplicate string
*/

char *_strdup(char *str)
{
	unsigned int i;
	char *duplicate;

	duplicate = malloc(sizeof(char));
	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			duplicate[i] = str[i];
		}
		return (duplicate);
	}
	return (0);
}
