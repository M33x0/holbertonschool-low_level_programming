#include "holberton.h"
/**
 * *leet - encodes a string into 1337
 *
 * @c: char 
 *
 * Return: c
 */
char *leet(char *c)
{
int i, j;
char lower_upper[] = "aeotlAEOTL";
char numbers[] = {'4', '3', '0', '7', '1','4', '3', '0', '7', '1'};
for (i = 0; c[i] != '\0'; i++)
for (j = 0; lower_upper[j] != '\0'; j++)
if (c[i] == lower_upper[j])
c[i] = numbers[j];
return (c);
}
