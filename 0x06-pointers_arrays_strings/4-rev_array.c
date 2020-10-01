#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of intergers
 * @a: pointer to integer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
int i, j, swap;

for ((i = 0, j = n - 1); i < j; i++, j--)
{
swap = a[i];
a[i] = a[j];
a[j] = swap;
}
}
