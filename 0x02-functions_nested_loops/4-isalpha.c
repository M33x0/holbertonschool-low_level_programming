#include "holberton.h"
/**
*_isalpha - lower upper  alpha
*@c: integer
*Return: 1 if c is lowercase
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
