#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
* Description: Print alphabet in lowercase using 'putchar'
*/

int main(void)
{
	char c;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

