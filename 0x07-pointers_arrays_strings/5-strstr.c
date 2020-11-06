#include "holberton.h"
/**
 * _strstr - find the first occurrence
 * @haystack: string
 * @needle: substring
 * Return: a pointer to needle or NULL if no byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack == *sub && *sub != 0 && *haystack != 0)
		{
			haystack++, sub++;
		}	
		if (*sub == 0)
		{
			return (start);
		}	
		haystack = ++start;
	}
	return (0);
}
