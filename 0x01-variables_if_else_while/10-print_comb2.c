#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : Prints combination of number from 00..99
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int a;
int b;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (a != '0' || b != '0')
{
putchar(',');
putchar(' ');
}
putchar(a);
putchar(b);
}
}
putchar('\n');
return (0);
}
