#include "holberton.h"
/**
 * print_alphabet_x10 - blabla
 * Description : Prints alphabet 10 times
 * Return: Always 0 (Success)
*
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 1; i <= 10 ; i++)
{
for (j = 'a' ; j <= 'z' ; j++)
_putchar(j);
_putchar('\n');
}
}
