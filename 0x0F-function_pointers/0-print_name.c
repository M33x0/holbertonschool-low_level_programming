#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: given name
 * @f:given function
 * Return : Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		name = "";
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
