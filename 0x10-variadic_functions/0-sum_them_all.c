#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters passed to the function
 * Return: sum of arguments, 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		va_end(numbers);
		return (0);	
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, unsigned int);
	}
	va_end(numbers);
	return (sum);
}
