#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - 9 times table
*Return: 0
*/
void print_to_98(int a)
{
int i;
if (a < 98)
{
for (i = a; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else if (a > 98)
{
for (i = a; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
printf("98");
}
printf("\n");
}
