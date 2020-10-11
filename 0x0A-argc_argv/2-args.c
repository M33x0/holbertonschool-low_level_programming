#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return:  0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int arg;
		for (arg = 0; arg < argc; arg++)
		{
			printf("%s\n", argv[arg]);
		}
	}
	return (0);
}
