#include "holberton.h"

/**
  * _strlen_recursion - Return the length of a string
  * @s: the string to count
  * Return: integer(length of a string)
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
