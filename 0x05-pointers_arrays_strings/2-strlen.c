#include "holberton.h"

/**
 * _strlen - count length of a string
 * @s: pointer char
 * Return: the length of the string given
 */
#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
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