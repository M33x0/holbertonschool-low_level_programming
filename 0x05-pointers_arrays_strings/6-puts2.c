#include "holberton.h"

/**
 * puts2 - print only pair entry from string
 * @str: string given
 * Return : void
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
