#include "holberton.h"
/**
*print_last_digit - the sign number
*@d: integer
*Return: value of last digit
*/
int print_last_digit(int d)
{
d = (d % 10);
if (d < 0)
d = -d;
_putchar(d + '0');
return (d);
}
