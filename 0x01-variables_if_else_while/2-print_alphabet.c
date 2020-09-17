#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase using putchar
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}