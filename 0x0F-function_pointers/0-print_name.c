#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - to print a name
 * @f: The function i use to check the name
 * @name: given string name
 * Return : Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
