#include "holberton.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer s
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		else if (s[i] == 0)
		{
			return (0);
		}
		s++;
	}
	return (s);
}
