#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
{
i++;
}
return (i);
}

/**
 * rev_string - reverses a string
 * @s: string s
 */
void rev_string(char *s)
{
int length_string = _strlen(s);
char tmp;
char *begin = s, *end = s;

end += length_string - 1;
while (begin < end)
{
tmp = *begin;
*begin = *end;
*end = tmp;
begin++;
end--;
}
}
