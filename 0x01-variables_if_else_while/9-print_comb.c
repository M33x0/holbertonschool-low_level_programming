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
int i;

for(i = '0' ; i <= '9' ; i++)
{
	
if(i != '0')
{
putchar(',');
putchar(' ');
}
putchar(i);
}
putchar('\n');
return (0);
}
