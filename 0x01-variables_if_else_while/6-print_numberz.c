#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : Display number from 0..9 using putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i = 0;
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
