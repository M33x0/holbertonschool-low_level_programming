#include "holberton.h"

/**
 * _memset - copies n bytes from memory area @src to @dest
 * @n: number of bytes to copy
 * @src: memory sources
 * @dest: memory destination
 * Return: dest
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
