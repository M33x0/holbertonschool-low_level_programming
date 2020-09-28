#include "holberton.h"

/**
*swap_int - swap two integer
*@a: integer pointer
*@b: integer pointer
*Return: void
*/

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
