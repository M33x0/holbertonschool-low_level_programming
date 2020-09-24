#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0..9 (!2 || !4)
 *
 * Return: 0
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; ic<= '9'; c++)
{
if (c != '2' && c != '4')
{
_putchar(c);
}
}
_putchar('\n');
}
