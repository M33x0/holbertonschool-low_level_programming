#include <stdio.h>
#include <stdlib.h>

/**
*main - printing the number of arguments passed
*@argc: length of argv
*@argv: array of strings
*Return: 1
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
