#include <stdio.h>

/**
 * main - prints sum of fibo numbers under 4,000,000
 * Return: 0
 */
int main(void)
{
long a, b, next, sum;
a = 1;
b = 2;
next = 3;
sum = b;
while (next < 4000000)
{
next = a + b;
a = b;
b = next;
if ((b < 4000000) && (b % 2 == 0))
sum += b;
}
printf("%lu\n", sum);
return (0);
}
