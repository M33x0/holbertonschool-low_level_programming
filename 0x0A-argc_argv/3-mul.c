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
int a, b, result;
	if (argc != 3)
	{
		printf("Error!!\n");
		return (1);
	}
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	return (0);
}
