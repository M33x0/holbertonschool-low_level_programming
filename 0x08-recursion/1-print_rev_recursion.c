#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: char to check
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
