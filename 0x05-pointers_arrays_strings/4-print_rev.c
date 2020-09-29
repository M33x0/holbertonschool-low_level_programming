#include "holberton.h"
/**
 * print_rev - print a string, in reverse, followed by a new line
 * @s: the string to print
 */

void print_rev(char *s)
{
char *a = s;
if (s)
{
while (*a)
{
++a;
}
while (s < a--)
{
_putchar(*a);
}
_putchar('\n');
}
}
