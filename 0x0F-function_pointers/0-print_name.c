#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: given name
 * @f: given function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		name = "";ereert
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}