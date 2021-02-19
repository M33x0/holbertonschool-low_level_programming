#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
