#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: number of letters the function should read
 * Return: If the function fails or filename is NULL - 0
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer = malloc(sizeof(char *) * letters);

	if (filename == NULL || buffer == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
