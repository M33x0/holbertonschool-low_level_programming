#include "holberton.h"

/**
 * puts2 - print only pair entry from string
 * @str: string given
 * Return : void
 */
void puts2(char *str)
{
int i, j;

for (j = 0; str[j] != '\0'; j++)
j++;
for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
