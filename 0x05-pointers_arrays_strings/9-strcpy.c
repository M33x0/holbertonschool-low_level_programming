#include "holberton.h"

/**
 * *_strcpy - copies string pointed to by src
 * @dest: character destination
 * @src: character source
 *Return: new char copy
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
