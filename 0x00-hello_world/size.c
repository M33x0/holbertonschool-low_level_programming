#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *Description:Get random number and print it
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n < 0)
    {
        prinf("%d is negative \n ", n);
    }
    else if (n > 0)
    {
        printf("%d is positive \n", n);
    }
    else
        printf("%d is zero \n");
    return (0);
}