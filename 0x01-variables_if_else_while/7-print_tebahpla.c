#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : Prints the low alphabet in reverse with putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
