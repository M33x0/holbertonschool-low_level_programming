#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: given name
 * @f:given function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
