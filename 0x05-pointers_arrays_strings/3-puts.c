#include "holberton.h"

/**
 * _puts - Print a string
 * @str: string to print
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
