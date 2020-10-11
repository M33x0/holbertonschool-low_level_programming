#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * @result: integer to containt multiplication result
 * Return:  0 (success)
 */
int main(int argc, char *argv[])
{
int result;
	if (argc != 3)
	{
		printf("Error!!\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
	return (0);
}
