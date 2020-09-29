#include "holberton.h"

/**
 * _puts - Print a string
 * @s: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
