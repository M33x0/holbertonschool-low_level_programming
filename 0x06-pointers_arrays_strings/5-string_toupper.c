#include "holberton.h"
/**
* string_toupper - function that turns a string to lowercase to uppercase.
* @str: string.
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