#include "holberton.h"

/**
 * _memcpy - copies memories area
 * @n: number of bytes to copy
 * @src: memory sources
 * @dest: memory destination
 * Return: destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
