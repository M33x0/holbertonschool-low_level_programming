#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: number of elements
 * Return: Always 0.
 */
char *rot13(char *s)
{
int i, j;
char array1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char array2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; array1[j] != '\0' ; j++)
{
if (s[i] == array1[j])
{
s[i] = array2[j];
}
}
}
return (s);
}
