#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	va_start(numbers, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}