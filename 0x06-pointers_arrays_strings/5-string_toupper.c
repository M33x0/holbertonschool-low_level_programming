#include "holberton.h"

/**
* string_toupper - changes lowercase letters to uppercase
* @s: string.
* Return: A string in uppercase
*/
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
}
}
return (s);
}
