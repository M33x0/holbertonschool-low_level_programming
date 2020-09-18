#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : Prints all number in base16
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int i = 0;
char c = 'a';
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
}
for (c = 'a' ; c <= 'f' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
