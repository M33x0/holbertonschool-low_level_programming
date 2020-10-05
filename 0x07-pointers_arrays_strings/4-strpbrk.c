#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in s of any of the bytes of accept
 * @accept: pointer to get the bytes
 * @s: string
 * Return: a pointer to s or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[i]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
