#include "holberton.h"

/**
 * *_strcmp - compare two string
 * @s1: char
 * @s2: char
 * Return: substraction ASCII code of the two first character
 */
int _strcmp(char *s1, char *s2)
{
char ptr_1;
char ptr_2;
ptr_1 = *s1;
ptr_2 = *s2;

while ((ptr_1 != '\0' && ptr_2 != '\0') && ptr_1 == ptr_2)
{
ptr_1++;
ptr_2++;
}
if (ptr_1 == ptr_2)
{
return (0);
}
return (ptr_1 - ptr_2);
}
