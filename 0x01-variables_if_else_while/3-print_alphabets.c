#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabet lowercase and after Uppercase
 * Return: Always 0 (Success)
*
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchat('\n');
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
return (0);
}

