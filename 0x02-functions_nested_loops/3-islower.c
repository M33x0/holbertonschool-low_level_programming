#include "holberton.h"
/**
 * _islower - lala
 * Description : Function that check lowercase character
 * Return: 1 if lowercase else return 0 otherwise
 * 9- Check if c is between 9 & 122 from ASCII code
 */
int _islower(int character)
{
if (character >= 97 && character <= 122)
{
return (1);
}
else
{
return (0);
}
}
