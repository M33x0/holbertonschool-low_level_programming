#include "holberton.h"

/**
 * print_numbers -prints number 0..9\n
 *
 * Return: void
 */
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
