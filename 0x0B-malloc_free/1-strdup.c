#include "holberton.h"
#include <stdlib.h>

/**
*_strdup - returns a pointer to a newly allocated space
* @str: char ,string to copied
* Return: a pointer to the duplicate string
*/
char *_strdup(char *str)
{
	int i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = malloc(sizeof(*str));
	if (duplicate == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i] = str[i];
	return (duplicate);
	return (0);
}