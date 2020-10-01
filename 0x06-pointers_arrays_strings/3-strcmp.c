#include "holberton.h"

/**
 * *_strcmp - compare two string
 * @s1: char
 * @s2: char
 * Return: substraction ASCII code of the two first character
 */
int _strcmp(char *s1, char *s2)
{


while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
return (*s1 - *s2);
}
