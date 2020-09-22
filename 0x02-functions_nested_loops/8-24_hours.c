#include "holberton.h"
/**
*jack_bauer - Prints every minutes 
*Return : 0
*/
void jack_bauer(void)
{
int hours, minutes, h1, h2, m1, m2;
for (hours = 0; hours < 24; hours++)
{
h1 = hours / 10;
h2 = hours % 10;
for (minutes = 0; minutes < 60; minutes++)
{
m1 = minutes / 10;
m2 = minutes % 10;
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
}
}
}
