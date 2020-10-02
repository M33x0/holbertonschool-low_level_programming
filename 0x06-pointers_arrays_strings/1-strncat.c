#include "holberton.h"

/**
 * _strncat - function concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: a pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; (j < n) && src[j]; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
