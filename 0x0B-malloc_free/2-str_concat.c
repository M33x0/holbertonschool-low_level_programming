#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int i = 0;
	while (*(s + i))
	{
		i++;
	}
return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, length1, length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = _strlen(s1);
	length2 = _strlen(s2);

	concat = malloc(sizeof(char) * (length1  + length2) + 1);
	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1 ; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < length2; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';
	return (concat);
}
