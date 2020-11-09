#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 * Return: if the function fails - -1 Otherwise - 1
 **/
int create_file(const char *filename, char *text_content)
{
	int o, w;
	int length = 0;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (length != '\0')
		{
			length++;
		}
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
