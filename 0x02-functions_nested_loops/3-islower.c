#include "holberton.h"
/**
 * main entry point
 * Description : Function that check lowercase character
 * Return 1 if lowercase else return 0 otherwise
 * 9- Check if c is between 9 & 122 from ASCII code
 **/
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