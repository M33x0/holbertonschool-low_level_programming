#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)	
		sum += va_arg(numbers,unsigned int);
}
	va_end(numbers);
	return (sum);
}
