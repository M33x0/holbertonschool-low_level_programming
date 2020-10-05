#include "holberton.h"
/**
*  *_strchr - function that locates a character in a string.
* @s: string
* @c: character to locate
* Return: a located character
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
