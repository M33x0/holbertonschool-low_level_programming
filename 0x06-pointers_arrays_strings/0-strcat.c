#include "holberton.h"

/**
 * *_strcat - appends the src string to the dest string
 * @dest: char
 * @src: char
 * Description: This will append the src string to the dest string
 * Return: a pointer dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
return (dest);
}
