#include "holberton.h"
/**
*_islower- lower alpha
*Return: 1 if c is lowercase
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
